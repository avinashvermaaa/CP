// https://www.geeksforgeeks.org/problems/ancestors-in-binary-tree/1




class Solution {
  public:
    // Function should return all the ancestor of the target node
    
    
    void func(Node* root,int target,vector<int>&ans , bool &f)
    {
        if(root==NULL)
        return ;
        
        if(root->data==target)
        {
            f=true;
            return;
        }
        if( !f)
        {
        
            func(root->left,target,ans,f);
        }
         if(!f)
        {
           
            func(root->right,target,ans,f);
        }
        if(f)
        {
            ans.push_back(root->data);
        }
        
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        
        vector<int>ans;
        bool f=false;
        func(root,target,ans,f);
           return ans;
    }
};
