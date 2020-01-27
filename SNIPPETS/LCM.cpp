ll lcm(ll a,ll b)
{
	vector<map<ll, ll>> x(2);
	pfact(a,x[0]);//declared in other
	pfact(b,x[1]);

	map<ll, ll> mp;
	rep(i,2)
	{
		for(auto a : x[i])
		{
			if(mp.find(a.ff)!=mp.end())
			{
				mp[a.ff]=max(mp[a.ff],a.ss);
				continue;
			}
			mp[a.ff]=a.ss;
		}
	}

	ll ans=1;
	for(auto x : mp)
		ans=mul(ans,modpower(x.ff,x.ss));
	return ans;
}