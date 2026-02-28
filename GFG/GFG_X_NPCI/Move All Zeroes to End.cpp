class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i = 0, j =0, n = arr.size();
        for(j; j<n;j++){
            if(arr[j] > 0){
                swap(arr[i], arr[j]);
                i++;
            }
        }
        
    }
};
