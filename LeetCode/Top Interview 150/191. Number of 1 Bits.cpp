// EASY

class Solution {
public:
    int hammingWeight(int n) {
        int ans = __builtin_popcountll(n);
        return ans;
    }
};
