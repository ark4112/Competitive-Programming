/* This code is written by bytesplease */
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define For(i, n) for(ll i=0;i<n;i++)
#define Rof(i, n) for(ll i=n-1;i>=0;i--)
#define Forr(i, x, y) for(ll i=x;i<y;i++)
#define ForIt(it, x) for(auto it=x.begin();it != x.end();it++)
#define ForRit(it, x) for(auto it=x.rbegin();it != x.rend();it++)
#define pb push_back
#define I first
#define II second
#define MOD 1000000007
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
ll fastPow(ll base, ll exp, ll mod) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%mod;
       base=(base*base)%mod;
       exp/=2;
    }
    return res%mod;
}

int main()
{
    faster
    ll tc;
    cin>>tc;
    while(tc--){


    }
    return 0;
}
 
/* End of Template */