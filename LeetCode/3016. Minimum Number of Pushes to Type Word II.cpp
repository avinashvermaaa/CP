class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq_char(26,0);
        for(char c : word)
        {
            freq_char[c - 'a']++;
        }
        sort(freq_char.rbegin(),freq_char.rend());
        int ans = 0;
        for(int i = 0; i<26;i++)
        {
            ans += (i / 8 + 1)*freq_char[i];
        }

        return ans;
    }
};
