class Solution {
  public:
    string findLargest(vector<int> &arr) {
        // code here
        vector<vector<int>> varr;
        
        vector<string> arr_str;
        
        for(int x : arr){
            arr_str.push_back(to_string(x));
        }
        
        sort(arr_str.begin(), arr_str.end(), [](string &a, string&b){
           return a + b > b + a; 
        });
        
        if(arr_str[0] == "0") return "0";
        
        string result = "";
        for(auto it : arr_str){
            result += it;
        }
        
        return result;
    }
};
