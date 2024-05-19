// Weekly Contest 398


class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        int maxdigits = 0;
        for(int num : nums)
        {
            maxdigits = max(maxdigits,(int)to_string(num).size());
        }
        vector<vector<int>> freqn(maxdigits,vector<int>(10,0));
        for(int num : nums)
        {
            string str = to_string(num);
            reverse(str.begin(),str.end());
            for(int i = 0;i<str.size();i++)
            {
                freqn[i][str[i]-'0']++;
            }
        }
        
        
            long long totalsum = 0;
            for(int num : nums)
            {
                string str = to_string(num);
                reverse(str.begin(),str.end());
                for(int k=0;k<str.size();k++)
             {
                int digits = str[k] - '0';
                for(int d = 0;d<10;d++)
                {
                    if(d!=digits)
                    {
                        totalsum += freqn[k][d];
                    }
                }
             }
            }
              
            return totalsum  /2 ;
        }
};
