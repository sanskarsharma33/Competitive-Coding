struct mquery
{
	vi arr, ans;
	vector<pair<pii, int>> queries;
	int blk, no_blk;
	
	mquery(int n, int q, vi &val, vector<pii> &que)
	{
		arr.resize(n);
		ans.resize(n);
		queries.resize(q);

		for(int i = 0 ; i < n ; i++)
			arr[i] = val[i];

		blk = floor(sqrt(n));
		no_blk = n / blk + n % blk != 0;

		for(int i = 0 ; i < q ; i++)
			queries[i] = {que[i], i};

		sort_by(queries, lhs.ff.ff / blk == rhs.ff.ff / blk ? lhs.ff.ss < rhs.ff.ss : lhs.ff.ff < rhs.ff.ff);
	}

	void add(int x)
	{
		// adding fxn (passed argument is index of element)

	}

	void remove(int x)
	{
		// removing fxn (passed argument is index of element)

	}

	void solve()
	{
		int q = queries.size();
		int L, R, l, r;

		L = 0;
		R = -1;

		for(int i = 0 ; i < q ; i++)
		{
			l = queries[i].ff.ff;
			r = queries[i].ff.ss;

			// increasing...
			while(L < l)
			{
				remove(L);
				L++;
			}
			while(R < r)
			{
				R++;
				add(R);
			}

			// decreasing...
			while(L > l)
			{
				L--;
				add(L);
			}
			while(R > r)
			{
				remove(R);
				R--;				
			}

			// code for ans
			ans[queries[i].ss] = ;
		}
	}
};