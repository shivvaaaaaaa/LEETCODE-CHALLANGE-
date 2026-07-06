class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum = 0;

        int maxEnding = nums[0];
        int minEnding = nums[0];

        int maxans = nums[0];
        int minans = nums[0];

        totalsum = totalsum + nums[0];

        for(int i =1; i<nums.size(); i++){
            totalsum = totalsum + nums[i];

            // maximum kadane 

            int v1 = maxEnding + nums[i];
            int v2 = nums[i];

            maxEnding = max(v1 , v2);
            maxans = max( maxEnding , maxans);

            // minimum kadane

            int v3 = minEnding + nums[i];
            int v4 = nums[i];

            minEnding = min( v3 , v4);
            minans = min(minEnding , minans);
        }

        if (maxans < 0)
    return maxans;

         int circularAns = totalsum - minans;
        return max(maxans , circularAns);
    }
};