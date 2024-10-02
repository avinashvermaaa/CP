class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        vector<int> nums = arr;

        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        for(int i = 0;i<nums.size();i++)
        {
            mp[nums[i]] = i+1;
        }

        for(int i = 0;i<arr.size();i++)
        {
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};
