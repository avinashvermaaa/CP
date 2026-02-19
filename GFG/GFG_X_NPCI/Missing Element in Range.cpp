class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        int sizeof_arr = high - low + 1;
        vector<int> arr2(sizeof_arr,0);
        
        for(auto it : arr){
            if(it >= low && it <= high){
                arr2[it - low] = 1;
            }
        }
        vector<int> answer;
        int i = 0;
        for(auto it : arr2){
            if(it == 0){
                answer.push_back(low + i);
            }
            i++;
        }
        
        return answer;
        
    }
};
