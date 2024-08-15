class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0,curr_maxi = 0;

        for(int i = 0;i<nums.size();i++)
        {
             if(nums[i] !=1) curr_maxi = 0;
            if(nums[i] == 1)
            {
                curr_maxi++;
            }
           
            maxi = max(maxi,curr_maxi);
        }

        return maxi;
    }
};


auto init =[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
