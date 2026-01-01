class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int length = cost.size();
        vector<int> dp(length);

        for(int i = 0;i < length; i++){
            if(i < 2) dp[i] = cost[i];
            else{
                dp[i] = cost[i] + min(dp[i-1], dp[i - 2]);
            }
        }
        int minCostToTop = min(dp[length - 1], dp[length - 2]);
        return minCostToTop; 
    }
};

int init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
