// https://www.geeksforgeeks.org/problems/construct-binary-tree-from-parent-array/1


class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) {
        // Your code here
        
        unordered_map<int,Node*> mp;

        for(int i=0;i<parent.size();i++){
            Node *node = new Node(i);
            Node *parentNode = new Node(parent[i]);
            
            if(mp.find(parent[i])!=mp.end())
                parentNode = mp[parent[i]];
            if(mp.find(i)!=mp.end())
                node = mp[i];
            
            if(!parentNode->left)    
                parentNode->left = node;
            else
                parentNode->right= node;
            
            mp[i] = node;
            mp[parent[i]]= parentNode;
        }
        
        return mp[-1]->left;
    }
};
