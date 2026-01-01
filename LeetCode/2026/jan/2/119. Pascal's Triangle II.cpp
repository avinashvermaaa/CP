class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pascal(rowIndex + 1, 1);

        for (int i = 1; i <= rowIndex; i++) {
            for (int j = i - 1; j > 0; j--) {
                pascal[j] = pascal[j] + pascal[j - 1];
            }
        }

        return pascal;
    }
};

int init = [](){
    ios::sync_with_sydio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
