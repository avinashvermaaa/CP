// https://www.geeksforgeeks.org/problems/remaining-string3515/1


// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        int i = 0;
        int n = s.length();
        while(i<n && count){
            if(s[i] == ch){
                count--;
            }
            i++;
        }
        
        if(count > 0)return "";
        if(i>=n)return "";
        string ans = "";
        
        for(int j =i;j<n;j++){
            ans+=s[j];
        }
        
        return ans;
    }
};
