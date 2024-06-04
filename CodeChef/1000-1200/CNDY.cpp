//avinash_verma
//code chef :- avinash_vermaa
//github : -   avinash_vermaaa

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define rep(i,a,b)     for(ll i=a;i<b;i++)
#define rrep(i,a,b)    for(ll i=a;i>=b;i--)
#define e2nrep(i,a,b)  for(ll i=a;i<=b;i++)

#define input(i,a,n);  for(int i=0;i<n;i++){ cin >> a[i]; }             // input of array
#define output(i,a,n); for(int i=0;i<n;i++){ cout<< a[i] <<" "; }        // output of array

#define pb                  push_back
#define ppb                 pop_back
#define pf                  push_front
#define all(x)              (x).begin(),(x).end()

#define ff first
#define sc second   			 // INT_MAX = 2147483647 INT_MIN = -2147483648

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void avinash_vermaa()
{
   ll n,m,a,b,c,d,x,y,z,k,w,p,q,r,s,l,h;
   ll flag=0,count=0,temp=0;
   
   cin>>n;
   
   ll arr[2 * n];
   
   input(i,arr,2*n);
   
   unordered_map<int, int> freq;
   for(int num : arr)
   {
      freq[num]++;
      if(freq[num] > 2 )
      {
         count++;
      }
   }
   count >=1 ? cout<<"no" : cout<<"yes";
   cout<<endl;  
}

int main()
{
	fastio();
	ll t;
	cin>>t; while(t--)
	{
		avinash_vermaa();	
	}
}




---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//avinash_verma
//code chef :- avinash_vermaa
//github : -   avinash_vermaaa

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define rep(i,a,b)     for(ll i=a;i<b;i++)
#define rrep(i,a,b)    for(ll i=a;i>=b;i--)
#define e2nrep(i,a,b)  for(ll i=a;i<=b;i++)

#define input(i,a,n);  for(int i=0;i<n;i++){ cin >> a[i]; }             // input of array
#define output(i,a,n); for(int i=0;i<n;i++){ cout<< a[i] <<" "; }        // output of array

#define pb                  push_back
#define ppb                 pop_back
#define pf                  push_front
#define all(x)              (x).begin(),(x).end()

#define ff first
#define sc second   			 // INT_MAX = 2147483647 INT_MIN = -2147483648

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void avinash_vermaa()
{
   ll n,m,a,b,c,d,x,y,z,k,w,p,q,r,s,l,h;
   ll flag=0,count=0,temp=0;
   
   cin>>n;
   
   ll arr[2 * n];
   
   map<int, int> mp;
   
   rep(i,0,2*n)
   {
      int xx;
      cin>>xx;
      mp[xx]++;
   }
   bool mark = true;
   for(auto num : mp)
   {
      if(num.second > 2)
      {
         mark = false;
      }
   }
   
   if(mark) cout<<"yes"<<endl;
   else cout<<"no"<<endl;
      
}

int main()
{
	fastio();
	ll t;
	cin>>t; while(t--)
	{
		avinash_vermaa();	
	}
}
