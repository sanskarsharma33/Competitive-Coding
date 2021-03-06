#if __has_include("debug.h")
    #include "debug.h"
#else
    #include<bits/stdc++.h>
    using namespace std;

    #define p(str) 7
    #define o(str) 42
    #define fundri 108
    #define d(...) 1729
#endif


typedef unsigned int ui;
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const bool testcases = 0;
#define ff first
#define ss second
#define endl '\n'
#define all(s) s.begin(),s.end()
#define test int __T__=1;if(testcases)cin>>__T__;while(__T__--)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define make_unique(vec) sort(all(vec));vec.erase(unique(all(vec)),vec.end())
#define sort_by(cont,expr) sort(all(cont),[&](const auto &lhs,const auto &rhs){return expr;})

ll seed;auto random_address=[]{char *p=new char;delete p;return (uint64_t)p;};
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()*(random_address()|1));
inline int rnd(int l=0,int r=INT_MAX){return uniform_int_distribution<int>(l,r)(rng);}

template<typename T>bool isPrime(T n){for(T i=2;i*i<=n;i++)if(n%i==0)return 0;return 1;}
template<typename T>inline bool in_range(T a,T l,T r){return (a>=l&&a<=r);}

template<typename T,typename U>inline istream& operator >>(istream& in,pair<T,U> &a)
{in>>a.ff>>a.ss;return in;}
template<typename T>inline istream& operator >>(istream& in,vector<T> &a)
{for(auto &x : a)in>>x;return in;}
template<typename TAIL>inline void inp(TAIL& T){cin>>T;}
template<typename HEAD,typename... TAIL>inline void inp(HEAD &H,TAIL&... T){cin>>H;inp(T...);}

//include other

int main()
{
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time, end_time;
    start_time = std::chrono::high_resolution_clock::now();

    #ifdef DHRUV_GHEEWALA
        freopen("INPUT.txt","r",stdin);
        freopen("OUTPUT.txt","w",stdout);
        freopen("DEBUG.txt","w",stderr);
    #endif
    
    fast;
    //variables
    test{

    

    fundri;
    }

    end_time = std::chrono::high_resolution_clock::now();
    ll elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count();
    o("\n\n======\n");
    if(elapsed_time<10000)
        o("Elapsed Time: "<<elapsed_time<<" ms\n");
    else
        o("Elapsed Time: "<<elapsed_time/1000<<" s\n");

    return 0;
}