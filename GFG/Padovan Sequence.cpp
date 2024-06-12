// https://www.geeksforgeeks.org/problems/padovan-sequence2855/1


#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    int padovanSequence(int n)
    {
     
       int a=1, b=1;
       int c=1, mod = (int)1e9+7;
        
        for(int i=3;i<=n;i++){
            int now = (b%mod + c%mod)%mod;
            
            c=b;
            b=a;
            a=now;
        }
        
        return a;
    }
    
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
