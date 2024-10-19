class Solution {
public:
    char findKthBit(int n, int k) {
        string str = "0";
        char ans ;
        for(int i = 1;i<n;i++)
        {
            string str2 = str + "1";
            string temp = "";
            for(int j = 0;j<str.size();j++)
            {
                str[j]  = str[j] - '0' ? '0' : '1';
            }

             reverse(str.begin(), str.end());
            str2 += str;
          
            str = str2;
        }

        return str[k-1];
    }
};
