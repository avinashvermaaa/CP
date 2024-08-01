class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        string str;
        for(int i = 0;i <details.size();i++)
        {
            str = details[i].substr(11,2);
            if(str > "60") count++;
        }


        return count;
    }
};
