class Solution {
public:
    int tribo(int n){
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        else{
            vector<int>dp(n+1);
            dp[0] = 0,dp[1] = 1,dp[2] = dp[1];
            for(int i = 3; i<=n;i++){
                dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
            }
            return dp[n]; 
        }
    }
    int tribonacci(int n) {
       int answer = tribo(n);
       return answer; 
    }
};

int init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
