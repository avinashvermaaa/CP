class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       stringstream ss(s1);
       string word;
       vector<string> ans;
       
       unordered_map<string,int> mp;
       while(ss >> word)
       {
        mp[word]++;
       }
        stringstream ss2(s2);
        word="";
       while(ss2 >> word)
       {
         mp[word]++;
       }

       for(auto it : mp)
       {
        if(it.second == 1)
        {
            ans.push_back(it.first);
        }
       }

    return ans;
    }
};


auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';    
}();
