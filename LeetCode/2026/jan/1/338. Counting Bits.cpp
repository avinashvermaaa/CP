class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bitsArray;
        int x;
        for(int i =0; i<=n; i++){
            x = __builtin_popcountll(i);
            bitsArray.push_back(x);
        }

        return bitsArray;
    }
};

int init =[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
