#include<bits/stdc++.h>
using namespace std;

int solve(vi &a)
{
	int n=a.size(),pro=0;
	vi profit(n,0);
	rep(i,n)
	{
		pro+=a[i];
		if(pro>0)
		{
			profit[i]=pro;
			continue;
		}
		pro=0;
		profit[i]=a[i];
	}
	return *max_element(all(profit));
}

int main()
{
	int n;
	cin>>n;
	vi a(n);
	cin>>a;
	cout<<solve(a),nl;
	return 0;
}
