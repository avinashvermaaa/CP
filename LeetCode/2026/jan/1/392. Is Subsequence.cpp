class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0,i=0;
        vector<int> arr;
        for(i; i<t.size();i++){
            if(t[i] == s[j]){
                j++;
                arr.push_back(1);
            }
        }

        return (arr.size() == s.size());
    }
};

int init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
