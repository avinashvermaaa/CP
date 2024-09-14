class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = 0;
        for(int i = 0;i<nums.size();i++)
        {
            maxi = max(maxi,nums[i]);
        }
        int ct = 0,ct2=0;
        for(int i= 0;i<nums.size();i++)
        {
            if(nums[i] == maxi) ct++;
            else ct = 0;
            ct2 = max(ct2,ct);
        }

        return ct2;
    }
};

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
