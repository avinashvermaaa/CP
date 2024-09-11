
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n  = nums.size();
        
        int ct=0,ele;
        for(int  i= 0;i<n;i++)
        {
            if(ct==0)
               {
                  ct++;
                  ele = nums[i];  
               }
               
            else if(nums[i] == ele) ct++;
            else ct--;
        }
        
        int cnt1 = 0;
        for(int i = 0;i<n;i++)
        {
            if(ele == nums[i]) cnt1++;          
        }
        
        if(cnt1 > n/2) return ele;
        
        return -1;
        
    }
};


auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
};
