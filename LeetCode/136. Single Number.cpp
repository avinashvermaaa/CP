class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i =0; i<nums.size();i++)
        {
            ans ^= nums[i];
        }

        return ans;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
