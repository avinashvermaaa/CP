class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
       stringstream word1(sentence1);
       stringstream word2(sentence2);

       vector<string> sen1;
       vector<string> sen2; 
       string words1,words2;

       while(word1 >> words1)
       {
        sen1.push_back(words1);
       }
       
       while(word2 >> words2)
       {
        sen2.push_back(words2);
       }

       int start1 = 0,start2 = 0,end1 = sen1.size()-1, end2 = sen2.size()-1;
       while(start1 <= end1 && start2 <= end2)
       {
        if(sen1[start1] == sen2[start2])
        {
            start1++;start2++;
        }
        else if( sen1[end1] == sen2[end2])
        {
            end1--;
            end2--;
        }
        else return false;
       }


       return true;

    }
        
};
