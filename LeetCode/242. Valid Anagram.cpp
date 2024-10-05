class Solution {
public:
    bool isAnagram(string s, string t) {
        // N(LOG(N))
            // sort(s.begin(),s.end());
            // sort(t.begin(),t.end());
            // return (s==t);
            

        // O(N)
        if(s.size() != t.size()) return false;        
        vector<int> check(26,0) ,freq(26,0) ;
        for(int i = 0;i<s.size();i++)
        {
            freq[s[i] - 'a']++;
            check[t[i] - 'a']++;
        }
        

        return (freq == check);

    }
};

