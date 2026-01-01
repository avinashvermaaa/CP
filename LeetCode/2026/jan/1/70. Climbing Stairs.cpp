class Solution {
private : 
    vector<int> dp = vector<int>(46,-1);
public:
    int recursion(int n){

        if(n == 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        if(dp[n] != -1) return dp[n];

        return dp[n] = recursion(n-1) + recursion(n-2);

    }
    int climbStairs(int n) {
        int answer = recursion(n);
        return answer;
    }
};

int init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
