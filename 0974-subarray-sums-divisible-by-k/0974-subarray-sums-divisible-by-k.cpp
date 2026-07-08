class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int result = 0;
        int sum = 0;
        unordered_map<int,int>f;
        f[0] = 1;

        for(int i = 0; i<nums.size(); i++){
            sum = sum + nums[i];
            int remainder = sum % k;

            //agar remainder negative aaya toh
            if(remainder<0){
            remainder = remainder + k;
            }
            
            result = result + f[remainder];
            f[remainder]++;

        }
        return result;
    }
};