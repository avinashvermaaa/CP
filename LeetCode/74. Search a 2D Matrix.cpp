// MEDIUM

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        unordered_set<int> st;

        for(int i = 0;i<matrix.size();i++)
        {
            for(int j = 0;j<matrix[i].size();j++)
            {
                st.insert(matrix[i][j]);
            }
        }

        auto it = st.find(target);

        if(it != st.end())
        {
            return true;
        }
        else return false;
    }
};


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
