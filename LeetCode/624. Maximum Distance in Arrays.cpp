class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        
        int globalmin = arrays[0][0];
        int globalmax = arrays[0].back();

        int ans =  0;

        for(int i = 1; i<arrays.size();i++)
        {
            int localmin = arrays[i][0];
            int localmax = arrays[i].back();

            ans = max(ans, max(localmax - globalmin, globalmax - localmin));
            globalmin = min(globalmin,localmin);
            globalmax = max(globalmax,localmax);
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
