ll max_subarray_sum(vl &a)
{
    int n = a.size();
    ll sum = 0;
    vl dp(n, 0);

    for(int i = 0 ; i < n ; i++)
    {
        sum += a[i];
        if(sum > 0)
        {
        	dp[i] = sum;
        	continue;
        }
        sum = 0;
        dp[i] = a[i];
    }
    return *max_element(all(dp));
}