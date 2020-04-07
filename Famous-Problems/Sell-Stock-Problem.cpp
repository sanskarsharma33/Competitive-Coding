// we can take atmost k stocks at a time
int sell_stock_problem(vi &profits, int k)
{
    vi dp(k + 1, -INF);
    dp[0] = 0;

    for(auto profit : profits)
    {
        dp[0] = max(dp[0], dp[1] + profit);
        for(int i = k ; ~i ; i--)
            dp[i] = max(dp[i], dp[i - 1] - profit);
    }

    return dp[0];
    // bcoz, we don't need to have share at the end of all days
}
/***
 *** we can create 2-d dp array,
 *** where, dp[i][j] is value of
 *** best profit after buying j stock
 *** after i-th day
***/