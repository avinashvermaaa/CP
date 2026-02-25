class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mp;
        
        int prefixSum = 0;
        int maxLen = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > k)
                prefixSum += 1;
            else
                prefixSum -= 1;
            
            if (prefixSum > 0)
                maxLen = i + 1;
            
            if (mp.find(prefixSum) == mp.end())
                mp[prefixSum] = i;
            
            if (mp.find(prefixSum - 1) != mp.end()) {
                maxLen = max(maxLen, i - mp[prefixSum - 1]);
            }
        }
        
        return maxLen;
    }
};
