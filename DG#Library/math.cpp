const int MAX_ARRAY = 1000000;
const long double PI = 2*acos(0.0);

// Other
bool isPowerOfTwo(int a){return (x&&(!(x&(x-1))));}

// Modular Inverse
vector<Mint> inv;
void build_mmi_euclid(int maximum=MAX_ARRAY)
{
    maximum=min(maximum,MAX_ARRAY);
    inv.resize(maximum);
    inv[1]=1;
    for(int i=2;i<maximum;i++)
        inv[i]=MOD-inv[MOD%i]*(MOD/i);
}
Mint einverse(int a){return inv[a];}
Mint finverse(Mint a){return power(a,MOD-2);}

