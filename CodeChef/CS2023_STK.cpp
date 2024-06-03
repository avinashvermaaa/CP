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
     
    ll arr[n],brr[n];
    ll om = 0,addy = 0;
    rep(i,0,n)
    {
      cin>>arr[i];
      if(arr[i]!=0) count++;
      else count = 0;
      om = max(om,count);
    }
    
    count = 0;
    
    rep(i,0,n)
    {
      cin>>brr[i];
      if(brr[i]!=0) count++;
      else count = 0;
      addy = max(addy,count);
    }
    
    if(om == addy) cout<<"draw"<<endl;
    else if(om > addy) cout<<"om"<<endl;
    else cout<<"addy"<<endl;
      
      
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


