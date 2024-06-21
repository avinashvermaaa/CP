// https://www.geeksforgeeks.org/problems/compare-two-fractions4438/1

class Solution {
  public:
    string compareFrac(string s) {

        // Code here
        int i=0;
        string no1,no2,no3,no4;
        
        while(s[i]!='/'){ //for no1
            no1+=s[i++];
        }
        i++; // for ignoring '/'
        
        while(s[i]!=','){ //for no2
            no2+=s[i++];
        }
        i++; // for ignoring ','
        i++; // for ignoring ' '
        
        while(s[i]!='/'){ //for no3
            no3+=s[i++];
        }
        i++;
        
        while(i<s.size()){ //for no4
            no4+=s[i++];
        }
        
        if(stoi(no1)*1.0/stoi(no2) > stoi(no3)*1.0/stoi(no4)) return no1+"/"+no2;
        else if(stoi(no1)*1.0/stoi(no2) == stoi(no3)*1.0/stoi(no4)) return "equal";
        
        return no3+"/"+no4;
    }
};
