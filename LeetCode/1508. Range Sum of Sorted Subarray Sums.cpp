class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subarraySums;
    int M = 1e9 + 7;
    
    for (int start = 0; start < n; ++start) {
        int sum = 0;
        for (int end = start; end < n; ++end) {
            sum = (sum + nums[end]) % M;
            subarraySums.push_back(sum);
        }
    }

    sort(subarraySums.begin(),subarraySums.end());
    left--; right;
    int sumo=0;
//    int sumo =  accumulate(subarraySums.begin()+left,subarraySums.begin()+right,0); --> Mod M isn't taken
   for(int i = left;i<right;i++)
   {
    sumo = (sumo + subarraySums[i] ) % M;
   }
    return sumo;
    }
};
