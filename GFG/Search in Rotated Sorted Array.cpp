// https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1



class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // complete the function here
        int n = arr.size();
        
        int lo = 0;
        int hi = n-1;
        
        while(lo<=hi){
            int mid = (lo+hi)/2;
        
            if(arr[mid]==key){
                return mid;
            }
            
            if(arr[lo]<=arr[mid]){
                if(key>=arr[lo] && key<arr[mid]){
                    hi = mid-1;
                }
                else{
                    lo = mid+1;
                }
            }
            if(arr[mid]<=arr[hi]){
                if(key>arr[mid] && key<=arr[hi]){
                    lo = mid+1;
                }
                else{
                    hi = mid-1;
                }
            }
        }
        return -1;
    }
};
