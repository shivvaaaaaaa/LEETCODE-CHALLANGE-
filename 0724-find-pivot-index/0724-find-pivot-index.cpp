class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for( int i = 0; i<nums.size(); i++){
             sum = sum + nums[i];
        }
        
        if(nums.size() == 1){
    return 0;
}

        int left = 0;
        int right;

        for(int i = 1; i<nums.size(); i++){

            if(sum - nums[0] == 0){
                return 0;
            }
            left = left + nums[i-1];
            right = sum - nums[i] - left;

            if(left == right){
                return i;
            }
           
        }
         return -1;
    }
};