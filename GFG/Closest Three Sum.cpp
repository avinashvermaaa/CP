// https://www.geeksforgeeks.org/problems/three-sum-closest/1



class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        int diff=INT_MAX , flag=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int s=i+1, e=arr.size()-1;
            while(s<e){
               int sum= arr[i]+arr[s]+arr[e];
               if(sum==target){
                   return sum;
               }else if(sum>target)
               e--;
               else
               s++;
               if(abs(sum-target)<diff){
                   diff=abs(sum-target);
                   flag=sum;
               }
               else if(abs(sum-target )== diff)
               flag=max(flag,sum);
            }
        }
        return flag;
    }
};
