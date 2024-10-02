// 81/98 T.C. Passed
// class Solution {
// public:
//     bool canArrange(vector<int>& arr, int k) {
//         vector<pair<int,int>> st;
//         int n = arr.size();
//         unordered_map<int,int> hsmp;
//         for(auto it : arr)
//         {
//             hsmp[it]++; //= 1;
//         }
        
//         for(int i = 0;i<n-1;i++)
//         {
//             for(int j = i+1;j<n;j++)
//             {
//                 if( (hsmp[arr[i]] > 0 && hsmp[arr[j]] > 0) &&( (arr[i] + arr[j]) % k ==0) )
//                 {
//                     hsmp[arr[i]]--; // = 0;
//                     hsmp[arr[j]]--; // = 0;
//                     st.push_back({arr[i],arr[j]});
//                 }
//             }
//         }

//         for(auto it  :st)
//         {
//             cout<<it.first<<" "<<it.second<<endl;
//         }

//         int set_size = st.size();
//         cout<<set_size<<" "<<n;
//          n/= 2;
//         return set_size == n;
//     }
// };



class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> freq(k, 0);
        for (int num : arr) {
            int rem = num % k;
            if (rem < 0) {
                rem += k;
            }
            freq[rem]++;
        }
        
        if (freq[0] % 2 != 0) {
            return false;
        }
        
        for (int i = 1; i <= k / 2; i++) {
            if (freq[i] != freq[k - i]) {
                return false;
            }
        }
        
        return true;
    }
};
