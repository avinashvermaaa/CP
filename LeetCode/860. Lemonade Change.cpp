class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool ans = true;
        int arr[21];

        arr[5] = arr[10] = arr[20] = 0;
        for(int i = 0;i<bills.size();i++)
        {
            arr[bills[i]]++;
            if(bills[i] == 10) arr[5]-= 1;
            else if(bills[i] == 20)
            {
                if(arr[10] == 0) arr[5] -= 3;
                else
                {
                     arr[5] -= 1; arr[10] -= 1;
                }  
            }
            if( (arr[5] <= -1 ) || (arr[10] <= -1) ) {ans = false; break;}    
        }

        return ans;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
