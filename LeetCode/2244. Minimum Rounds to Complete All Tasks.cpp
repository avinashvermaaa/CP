class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        for(auto it : tasks)
        {
            mp[it]++;
        }
        int ans = 0;
        for(auto it : mp)
        {
            if(it.second == 1) return -1;
            if(it.second % 2 == 0 && it.second %3 ==0) 
            {
                ans += it.second / 3;
            }
            else if(it.second %3 == 1 || it.second %3 == 2)
            {
                    ans += it.second / 3;
                    ans++;
            }
            else if(it.second % 2 == 0) 
            {
                ans += it.second / 2;
            }
            else if(it.second %3 == 0)
            {
                ans += it.second / 3;
            }  
            
            // cout<<ans<<" ";
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
