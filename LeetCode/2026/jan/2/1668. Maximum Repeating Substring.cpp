class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int n = sequence.size() / word.size(), answer = 0;
        while(n){
            string str = word;
            for(int i = 2;i<=n;i++){
                str += word;
            }
            for(int i = 0;i<sequence.size(); i++){
                string str2 = sequence.substr(i, str.size());
                if(str2 == str){
                    answer = max(answer, n);
                }
            }

            n--;
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
