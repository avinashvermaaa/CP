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
   
   ll t1,t2,r1,r2;
   cin>>t1>>t2>>r1>>r2;
   
   t1 = t1*t1;
   t2 = t2*t2;
   r1 = r1*r1*r1;
   r2 = r2*r2*r2;
   
   t1 *= r2;
   t2 *= r1;
   if(t1==t2)
   {
      cout<<"yes"<<endl;
   }
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



/*
3
1 1 1 1
1 2 3 4
1 8 2 8

------------
Yes
No
Yes
*/

