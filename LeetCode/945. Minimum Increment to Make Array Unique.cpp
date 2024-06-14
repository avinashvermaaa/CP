class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int res = 0, m = *max_element(nums.begin(), nums.end());
        vector<int> freq(m + nums.size());
        for (int num : nums)
            freq[num]++;
        for (int i = 0; i < freq.size(); i++){
            if (freq[i] > 1){
                freq[i + 1] += freq[i] - 1;
                res += freq[i] - 1;
                freq[i] = 1;
            }
        }
        return res;
    }
};
