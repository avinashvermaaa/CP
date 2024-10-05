// T.C. 90/108

// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         bool ans = false;

//         if(s1.size() > s2.size()) return false;

//         int n = s1.size();
//         vector<int> arr(26,0);
//         for(int i = 0;i<n;i++)
//         {
//             arr[s1[i] - 'a']++;
//         }

//         for(int i = 0;i<s2.size()-n+1;i++)
//         {
//             int count = 0;
//             string str = s2.substr(i,n);
//             // cout<<str<<endl;
//             for(int j = 0;j<n;j++)
//             {
//                 // cout<<str[j]<<" ";
//                 if(arr[str[j] - 'a'] != 0) count++;
//                 else count = 0;
//                 if(count == n)
//                 {
//                     ans = true;
//                     // break;
//                 } 
//             }//cout<<count<<endl;
//         }



//         return ans;
//     }
// };



class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int>count1(26,0), count2(26,0);
        
        int i;
        for(i = 0; i < s1.size(); i++) {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }
        
        if(count1 == count2) return true;
        
        int start = 0, end = i;
        while(end < s2.size()){
            --count2[s2[start] - 'a'];
            ++count2[s2[end] - 'a'];
          
            if(count1 == count2) return true;
            end++; start++;
        }
        return false;
    }
};
