class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int flag = 1;
        for(int i = 1; i <nums.size(); i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[flag] = nums[i];
                flag++;
            }
        }

        return flag;
    }
};


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
