class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!= goal.size()) return false;
    goal += goal;
   
   string str2 ;
        for(int i =0 ; i<s.size();i++)
        {
            str2 = goal.substr(i,s.size());
            if(str2 == s) return true;
        }
   
   return false;
   
    }
};

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
