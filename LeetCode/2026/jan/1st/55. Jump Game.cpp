class Solution {
public:
    bool canJump(vector<int>& nums) {
        int MaxReachIndex = 0;
        for(int i = 0;i<nums.size(); i++){
            if(i > MaxReachIndex) return false;
            MaxReachIndex = max(MaxReachIndex, i+ nums[i]);
        }

        return true;
    }
};
