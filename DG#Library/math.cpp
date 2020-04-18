const int MAX_ARRAY = 1000000;
const long double PI = 2 * acos(0.0);

// Other
bool isPowerOfTwo(int a){return (x && ( !(x & (x - 1))));}

// Modular Inverse
vector<Mint> inv;
void build_mmi_euclid(int maximum = MAX_ARRAY)
{
    maximum = min(maximum, MAX_ARRAY);
    inv.resize(maximum);
    inv[1] = 1;
    for(int i = 2 ; i < maximum ; i++)
        inv[i] = MOD - inv[MOD % i] * (MOD / i);
}
Mint einverse(int a){return inv[a];}
Mint finverse(Mint a){return power(a, MOD - 2);}

// To Do primeFactorization of number n
int primeFactorization(int n)
{
    int cnt = 0;
    for(int i : {2, 3, 5})
    {
        while(n % i == 0)
        {
            n /= i;
            cnt++;
        }
    }

    static array<int, 8> increments = {4, 2, 4, 2, 4, 6, 2, 6};
    int cur = 0;
    for(int i = 7 ; i * i <= n ; i += increments[cur++])
    {
        while(n % i == 0)
        {
            n /= i;
            cnt++;
        }
        if(cur == 8)
            cur = 0;
    }

    if(n > 1)
        cnt++;

    return cnt;
}

// count the total number of factors
int primeFactorization(int n)
{
    int cnt, mul = 1;
    for(int i : {2, 3, 5})
    {
        cnt = 0;
        while(n % i == 0)
        {
            n /= i;
            cnt++;
        }
        mul *= (cnt + 1);
    }

    static array<int, 8> increments = {4, 2, 4, 2, 4, 6, 2, 6};
    int cur = 0;
    for(int i = 7 ; i * i <= n ; i += increments[cur++])
    {
        cnt = 0;
        while(n % i == 0)
        {
            n /= i;
            cnt++;
        }
        mul *= (cnt + 1);
        if(cur == 8)
            cur = 0;
    }

    if(n > 1)
        return (mul << 1);

    return mul;
}

// nCr efficient method "without mod"
int choose(int n, int r)
{
    int res, k;
    if(r > n - r)
        r = n - r;

    k = res = 1;
    while(r != 0)
    {
        res *= n;
        k *= r;

        int g = __gcd(res, k);

        res /= g;
        k /= g;

        n--;
        r--;
    }
    return res;
}