class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        if (s1.length() != s2.length()) return false;

        char map1[26] = {0};  
        char map2[26] = {0};  

        for (int i = 0; i < s1.length(); i++) {
            int idx1 = s1[i] - 'a';
            int idx2 = s2[i] - 'a';

            if (map1[idx1] == 0 && map2[idx2] == 0) {
                map1[idx1] = s2[i];
                map2[idx2] = s1[i];
            }
            else {
                if (map1[idx1] != s2[i] || map2[idx2] != s1[i])
                    return false;
            }
        }

        return true;
    }
};
