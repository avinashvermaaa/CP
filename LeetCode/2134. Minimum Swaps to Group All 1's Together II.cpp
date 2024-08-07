class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ones = 0,sli =0,maxi;

        ones = accumulate(nums.begin(),nums.end(),0);
        nums.insert(nums.end(),nums.begin(),nums.end());
        
        sli = accumulate(nums.begin(),nums.begin()+ones,0);
        
         maxi = sli;

        for(int i = ones;i<nums.size();i++)
        {
            sli += nums[i];
            sli -= nums[i-ones];
            maxi = max(maxi,sli);
        }

        return (ones - maxi);

    }
};
