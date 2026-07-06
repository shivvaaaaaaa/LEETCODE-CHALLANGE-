class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxEnding = nums[0];
        int minEnding = nums[0];

        int maxAns = nums[0];
        int minAns = nums[0];

        for(int i = 1; i<nums.size(); i++){
            int v1 = maxEnding + nums[i];
            int v2 = nums[i];

            maxEnding = max( v1 , v2);
            maxAns = max( maxAns , maxEnding);

            int v3 = minEnding + nums[i];
            int v4 = nums[i];

            minEnding = min( v3 , v4);
            minAns = min( minEnding , minAns);
        }
        return max( maxAns ,abs( minAns));
    }
};