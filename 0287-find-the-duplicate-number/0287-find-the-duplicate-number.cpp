class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[nums[0]];
        
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        int temp = 0;

        while(temp != slow){
            slow = nums[slow];
            temp = nums[temp];
        }
        return slow;
    }
};