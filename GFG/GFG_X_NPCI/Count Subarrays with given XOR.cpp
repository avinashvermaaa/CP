class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        unordered_map<int, int> mp;
        
        long count = 0;
        int prefixXor = 0;
        
        mp[0] = 1;  
        
        for(int num : arr) {
            prefixXor ^= num;
            
            if(mp.find(prefixXor ^ k) != mp.end()) {
                count += mp[prefixXor ^ k];
            }
            
            mp[prefixXor]++;
        }
        
        return count;
    }
};
