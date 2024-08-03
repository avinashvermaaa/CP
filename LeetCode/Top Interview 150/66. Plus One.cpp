class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        n--;
        digits[n]++;
        for(int i = n; i>=0; i--)
        {            
            if(digits[i] >= 10)
            {
                digits[i] %= 10;
                if(i>=1)digits[i-1]++;
                
            }
        }

        if(digits[0]==0) digits.insert(digits.begin(),1);

        return digits;
    }
};
