class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> pas(numRows);

        for (int i = 0; i < numRows; i++) {
            pas[i].assign(i + 1, 1);    

            for (int j = 1; j < i; j++)
                pas[i][j] = pas[i - 1][j - 1] + pas[i - 1][j];
        }

        return pas;
    }
};
