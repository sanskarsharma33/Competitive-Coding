/****
  ** Time Complexity : O(n * Logn)
  ** Space Complexity : O(n)
****/

int LSIS(vi &a)
{
	int n = a.size();
	multiset<int> s;

	for(int i = 0 ; i < n ; i++)
	{
		auto it = s.lower_bound(a[i]);
		if(it != s.end())
			s.erase(it);
		s.insert(a[i]);
	}

	return s.size();
}

int LIS(vi &a)
{
	int n = a.size();
	multiset<int> s;

	for(int i = 0 ; i < n ; i++)
	{
		auto it = s.upper_bound(a[i]);
		if(it != s.end())
			s.erase(it);
		s.insert(a[i]);
	}

	return s.size();
}