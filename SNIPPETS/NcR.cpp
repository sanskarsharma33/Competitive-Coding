const ll MOD=(ll)(1E9+7);
const int MAXN=200;
template<typename T>inline T mul(T a,T b,T mod){return ((a%mod)*(b%mod))%mod;}
template<typename T>inline T sum(T a,T b,T mod){return ((a%mod)+(b%mod))%mod;}

//if we require mod then we will not use this
ll NcR(int n, int r){long long p=1,k=1;if(n-r<r)r=n-r;if(r)
{while(r){p*=n;k*=r;long long m=__gcd(p, k);p/=m;k/=m;n--;r--;}}else p=1;return p;}

//works fine with mod(modulo multiplicative inverse)
//pasc[n][r] represents n!/(r!*(n-r)!)	(i.e. nCr)
int pasc[MAXN][MAXN];
void fillpasc(int n=MAXN)
{
	for(i=0;i<n;i++)
	{
		pasc[i][0]=pasc[i][i]=1;
		for(j=1;j<i;j++)
			pasc[i][j]=sum(pasc[i-1][j],pasc[i-1][j-1]);
	}
}