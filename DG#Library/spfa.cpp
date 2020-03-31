const ll INF = INT_MAX;
struct node
{
    int p;
    ll cost = INF;
};

string to_string(const node &a)
{
    #ifdef DEBUG
        return to_string(make_pair(a.p, a.cost));
    #endif
        return "";
}

vector<vector<pair<int, ll>>> adj;
vector<node> sssp;
vi relax_util;

void add_edge(vector<vector<pair<int, ll>>> &a, int u, int v, ll w, bool dir = 0)
{
    adj[u].push_back({v, w});
    if(!dir)
        adj[v].push_back({u, w});
}

bool spfa(int root = 1)
{
    int n = adj.size() - 1;
    
    vector<bool> relaxed(n + 1, false);
    deque<int> q;
    relax_util.assign(n + 1, 0);
    sssp.resize(n + 1);

    relaxed[root] = true;
    sssp[root].cost = 0;
    q.push_back(root);
    while(!q.empty())
    {
        int u = q.front();
        q.pop_front();
        relaxed[u] = false;

        for(const auto &v : adj[u])
        {
            ll dist = sssp[u].cost;
            if(dist < INF)
            {
                dist += v.ss;
                if(dist < sssp[v.ff].cost)
                {
                    // checking for negative weight cycle existence
                    relax_util[v.ff]++;
                    if(relax_util[v.ff] >= n)
                        return false;
                    sssp[v.ff] = {u, dist};
                    if(!relaxed[v.ff])
                    {
                        if(!q.empty() && sssp[q.front()].cost > dist)
                            q.push_front(v.ff);
                        else
                            q.push_back(v.ff);
                        relaxed[v.ff] = true;
                    }
                }
            }
        }
    }
    return true;
}

void clearAll(int n)
{
    adj.clear();
    sssp.clear();
    adj.resize(n + 1);
}