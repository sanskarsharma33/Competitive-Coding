/*
**  num^1 will give num' which will be odd if num is even and vice versa, i.e. 2^1=3 & 3^1=2,4^1=5 & 5^1=4
**  max_size_vector = 100000000
                        (1e8)
*/


//Problem Description
#include<bits/stdc++.h>
using namespace std;

#ifndef DHRUV_GHEEWALA
    #define p(str) 42
    #define o(str) 108
    #define fundri 137
    #define d(...) 1729
#endif

typedef unsigned int ui;
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

#define nl cout<<'\n'
#define pb push_back
#define pop pop_back
#define all(s) s.begin(),s.end()
#define ff first
#define ss second
template<typename T,typename U>inline bool exist(T cont,U val){return cont.find(val)!=cont.end();}

#define rep(i,n) for(int i=0;i<(n);i++)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define loop(i,l,r) for(int i=l;i<=r;i++)
#define rloop(i,r,l) for(int i=r;i>=l;i--)
#define iter(cont,it) for(auto it=cont.begin();it!=cont.end();it++)
#define riter(cont,it) for(auto it=cont.rbegin();it!=cont.rend();it++)

#define fast ios_base::sync_with_stdio(0)
#define test int t=0;cin>>t;while(t--)
#define fill(a,b) memset(a,b,sizeof(a))

template<typename TAIL>inline void inp(TAIL& T){cin>>T;}
template<typename HEAD,typename... TAIL>inline void inp(HEAD &H,TAIL&... T){cin>>H;inp(T...);}
template<typename T,typename U>inline istream& operator >>(istream& in,pair<T,U> &a){in>>a.ff>>a.ss;return in;}
template<typename T>inline istream& operator >>(istream& in,vector<T> &a){for(auto &x : a)in>>x;return in;}
template<typename T>inline void MIN(T& x,T y){if(x>y)x=y;}
template<typename T>inline void MAX(T& x,T y){if(x<y)x=y;}

template<typename T>inline bool in_range(T a,T l,T r){return (a>=l&&a<=r);}
template<typename T>inline ll simple_xor(T n){int rem=n%4;switch(rem){case 0:return n;case 1:return 1;case 2:return n+1;return 0;}}
template<typename T>inline ll range_xor(T l,T r){return simple_xor(l-1)^simple_xor(r);}
template<typename T>bool isPrime(T n){for(T i=2;i*i<=n;i++)if(n%i==0)return 0;return 1;}

int main()
{
    #ifdef DHRUV_GHEEWALA
        freopen("INPUT.txt","r",stdin);
        freopen("OUTPUT.txt","w",stdout);
        freopen("DEBUG.txt","w",stderr);
    #endif
    
    fast;
    //variables
    test
    {
        
    }
    
    return 0;
}