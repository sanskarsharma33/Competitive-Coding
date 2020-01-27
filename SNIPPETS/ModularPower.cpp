const ll MOD=(ll)(1E9+7);

inline ll power(ll a,ll b,ll MOD=LLONG_MAX)
{
    if(b==0)
        return 1;
    if(b==1)
        return a%MOD;
    if(b%2)
        return mul(power(a,b-1),a,MOD);
    ll q=power(a,b/2)%MOD;
    return mul(q,q,MOD);
}