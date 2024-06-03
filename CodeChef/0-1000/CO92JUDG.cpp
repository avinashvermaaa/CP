//avinash_verma
//code chef :- avinash_vermaa
//github : -   avinash_vermaaa

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define rep(i,a,b)     for(ll i=a;i<b;i++)
#define rrep(i,a,b)    for(ll i=a;i>=b;i--)
#define e2nrep(i,a,b)  for(ll i=a;i<=b;i++)

#define pb                  push_back
#define ppb                 pop_back
#define pf                  push_front
#define all(x)              (x).begin(),(x).end()

#define ff first
#define sc second   			 // INT_MAX = 2147483647 INT_MIN = -2147483648

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void avinash_vermaa()
{
   // ll n,m,a,b,c,d,x,y,z,k,w,p,q,r,s,l,h;
   // ll flag=0,count=0,temp=0;
   
   int n;
   cin>>n;
   ll flag1=0,flag2=0;
   int arr[n],brr[n];
   
   rep(i,0,n)
   {
      cin>>arr[i];
      flag1+=arr[i];
   } 
   rep(i,0,n)
   {
      cin>>brr[i];
      flag2+=brr[i];
   }
   
   sort(arr,arr+n);
   sort(brr,brr+n);
   
   flag1 -= arr[n-1];
   flag2 -= brr[n-1];
   
   if(flag1<flag2)
   {
      cout<<"Alice"<<endl;
   }
   
   else if(flag1>flag2)
   {
      cout<<"Bob"<<endl;
   }
   
   else
   {
      cout<<"Draw"<<endl;
   }
   
   
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

/*
3
5
3 1 3 3 4
1 6 2 5 3
5
1 6 2 5 3
3 1 3 3 4
3
4 1 3
2 2 7

-----------

Alice
Bob
Draw
*/
