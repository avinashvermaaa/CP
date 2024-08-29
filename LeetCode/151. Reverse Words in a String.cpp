class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        stringstream ss(s);
        // for(auto)
        string word;
        while(ss >> word)
        {
            st.push(word);
            
        }
        string ans;
        while(!st.empty())
        {
            ans += st.top();
          if(st.size() != 1)  ans += " ";
            st.pop();
        }
    return ans;
    }
};

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
