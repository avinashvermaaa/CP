// EASY
// Write a function that takes the binary representation of a positive integer and returns the number of 
//   set bits
//   it has (also known as the Hamming weight).

 


class Solution {
public:
    int hammingWeight(int n) {
        int ans = __builtin_popcountll(n);
        return ans;
    }
};
