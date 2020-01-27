#include<bits/stdc++.h>
using namespace std;

//Program to calculate number of inversions available in given array
//Merge-Sort

ll external(vi &a,int l,int m,int r)
{
    ll c=0;
    int ln=m-l+1,rn=r-m;
    vi lp(ln+1,INT_MAX),rp(rn+1,INT_MAX);
    rep(i,ln)lp[i]=a[i+l];
    rep(i,rn)rp[i]=a[i+1+m];

    int n=r-l+1;
    int j,k;
    j=k=0;
    rep(i,n)
    {
        if(rp[k]<lp[j])
        {
            a[l+i]=rp[k];
            k++;
            c+=ln-j;
            continue;
        }
        a[l+i]=lp[j];
        j++;
    }
    return c;
}

ll internal(vi &a,int l,int r)
{
    ll c=0;
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        c=internal(a,l,m);  //left-side(internal)
        c+=internal(a,m+1,r);  //right-side(internal)
        c+=external(a,l,m,r);  //between left & right
    }
    return c;
}

ll num_inversion(vi &a){return internal(a,0,a.size()-1);}

int main()
{
    int n;
    cin>>n;
    vi a(n);
    cin>>a;
    cout<<num_inversion(a),nl;
    return 0;
}
