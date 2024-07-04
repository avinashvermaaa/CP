
class Solution {
  public:
  
    void solve(Node* root, int &min_val, int &max_val, int val)
    {
        if(root == nullptr)
            return;
        min_val = min(min_val, val);
        max_val = max(max_val, val);
        solve(root->left, min_val, max_val, val - 1);
        solve(root->right, min_val, max_val, val + 1);
    }
    int verticalWidth(Node* root) {
        if(!root)
            return 0;
        int min_val = 0, max_val = 0;
        solve(root, min_val, max_val, 0);
        return max_val + abs(min_val) + 1;
    }
};
