class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int change  = groups[0];
        vector<string> answer;
        answer.push_back(words[0]);
        for(int i = 1;i<words.size(); i++){
            if(groups[i] == change){
                continue;
            }
            else{
                answer.push_back(words[i]);
                change = groups[i];
            }
        }
        return answer;
    }
};

int init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
