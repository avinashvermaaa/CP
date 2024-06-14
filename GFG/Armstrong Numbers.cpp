// https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1


#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int val = n;
        int sum = 0;
        while(n > 0){
            int b = n % 10;
            sum += pow(b, 3);
            n = n / 10;
        }
        if(sum == val) return "Yes";
        return "No";
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
