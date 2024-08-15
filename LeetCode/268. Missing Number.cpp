class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        n = n * (n+1) /2;

        int sum = accumulate(begin(nums),end(nums),0);

        return n - sum;
    }
};


auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
