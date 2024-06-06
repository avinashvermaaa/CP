// https://www.geeksforgeeks.org/problems/max-sum-in-the-configuration/1


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long max_sum(int a[], int n) {
        long int lowda_sum = 0;
        for(int i=0;i<n;i++)
        {
            lowda_sum += (long int)a[i];
        }
        long int lowda_value = 0;
        for(int i=0;i<n;i++)
        {
            lowda_value += (long int)a[i]*i;
        }
        long int next_value = 0;
        long int ans = INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            next_value = lowda_value - lowda_sum + (long int)a[i]*n;
            lowda_value = next_value;
            ans = max(ans,lowda_value);
        }
        return ans;
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
      
    }
}
