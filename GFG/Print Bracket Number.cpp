// https://www.geeksforgeeks.org/problems/print-bracket-number4058/1


// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        stack<int> s;
        int k1=1;
        
        int n=str.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            if(str[i]=='('){
                s.push(k1);
                ans.push_back(k1);
                k1++;
            }else if(str[i]==')'){
                ans.push_back(s.top());
                s.pop();
            }
        }
        
        return ans;
    }
    
    
};
