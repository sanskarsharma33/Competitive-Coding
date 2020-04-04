#include "debug.h"
using namespace std;

typedef unsigned int ui;
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;

#define ff first
#define ss second
#define endl '\n'
#define all(s) s.begin(),s.end()
#define test int __T__=1;if(testcases)cin>>__T__;while(__T__--)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define make_unique(vec) sort(all(vec));vec.erase(unique(all(vec)),vec.end())
#define sort_by(cont,expr) sort(all(cont),[&](const auto &lhs,const auto &rhs){return expr;})

template<typename T>bool isPrime(T n){for(T i=2;i*i<=n;i++)if(n%i==0)return 0;return 1;}
template<typename T>inline bool in_range(T a,T l,T r){return (a>=l&&a<=r);}

ll seed;mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
inline int rnd(int l=0,int r=INT_MAX){return uniform_int_distribution<int>(l,r)(rng);}
int rand(int l, int r){int tot = r - l + 1;return rand()%tot + l;}

vector<char> vowels[2] = {{'a', 'e', 'i', 'o', 'u'}, {'A', 'E', 'I', 'O', 'U'}};

int main()
{
	// freopen("INPUT.txt", "r+");
    fast;
    int t = rand(1, 10);
    
    return 0;
}