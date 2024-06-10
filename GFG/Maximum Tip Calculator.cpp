// https://www.geeksforgeeks.org/problems/maximum-tip-calculator2631/1


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends


class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        vector<pair<int, int>> diff(n);
        for (int i = 0; i < n; ++i) {
            diff[i] = {i, abs(arr[i] - brr[i])};
        }

        // Sort based on the absolute difference in descending order
        sort(diff.begin(), diff.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            return a.second > b.second;
        });

        long long totalTip = 0,aCount = 0, bCount = 0;

    
        for (int i = 0; i < n; ++i) {
            int idx = diff[i].first;

            if (arr[idx] >= brr[idx]) {
                if (aCount < x) {
                    totalTip += arr[idx];
                    aCount++;
                } else {
                    totalTip += brr[idx];
                    bCount++;
                }
            } else {
                if (bCount < y) {
                    totalTip += brr[idx];
                    bCount++;
                } else {
                    totalTip += arr[idx];
                    aCount++;
                }
            }
        }

        return totalTip;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}
