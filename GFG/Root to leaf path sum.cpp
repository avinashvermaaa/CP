// https://www.geeksforgeeks.org/problems/root-to-leaf-path-sum/1

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
  public:
     bool hasPathSum(Node *root, int target) {
        // Your code hereif
        if(!root)return target==0;
        if(root->left==NULL && !root->right)return target==root->data;
        bool ans=false;
        if(root->left)
           ans=ans || hasPathSum(root->left, target-root->data);
        if(root->right)
        
         ans =ans || hasPathSum(root->right, target-root->data);
        return ans;
    }
};
