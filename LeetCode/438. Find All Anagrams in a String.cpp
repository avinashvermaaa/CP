class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans,freq(26,0),check(26,0);
        if(s.size() < p.size()) return ans;
        int i;
        for(i = 0;i<p.size();i++)
        {
            freq[p[i] - 'a']++;
            check[s[i] - 'a']++;
        }
        if(freq == check) ans.push_back(0);

        int start = 0,end = i;

        while(end < s.size())
        {
            --check[s[start] - 'a'];
            ++check[s[end] - 'a'];
            
            if(check == freq) ans.push_back(start+1);
            start++;end++;
        }

        return ans;
    }
};
