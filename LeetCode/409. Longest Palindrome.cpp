class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int ans = 0,temp = 0,c_temp =0;
        bool flag = true;
        for(auto it : s)
        {
            mp[it]++;
        }

        for(auto it : mp)
        {
            if(it.second %2==0) ans+= it.second;
            else
            {
                // c_temp = it.second;
                // temp = max(temp,c_temp);
                ans += --it.second ;
                flag = false;
            }
        }

        // ans+= temp;
        flag ? ans : ans++;
        return ans;
    }
};
