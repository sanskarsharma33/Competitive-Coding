#if __has_include("cpp_for_all.h")
#include "cpp_for_all.h"
#endif

#define gcd(a,b) (__gcd(a,b))
#define lcm(a,b) ((a*b)/gcd(a,b))
#define log(n,b) (log(n)/log(b))
#define setprec(a) cout<<fixed<<setprecision(a)
#define PI (2*acos(0.0))

inline ll pow2(int n){return (1LL<<n);}
inline int digits(int x){return (floor(log10(x))+1);}
inline bool isPowerOfTwo(int x){return (x&&(!(x&(x-1))));}
inline ll power(ll a,ll b){if(b==0)return 1;if(b==1)return a;
if(b%2)return power(a,b-1)*a;ll q=power(a,b/2);return q*q;}

template<typename T>inline T mul(T a,T b,T mod){return ((a%mod)*(b%mod))%mod;}
template<typename T>inline T sum(T a,T b,T mod){return ((a%mod)+(b%mod))%mod;}