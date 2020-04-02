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

void add_edge(vector<vector<pair<int, ll>>> &a, int u, int v, ll w, bool dir = 0)
{
    a[u].push_back({v, w});
    if(!dir)
        a[v].push_back({u, w});
}

vector<vector<pair<int, ll>>> adj;
set<pii> s;
vector<node> sssp;

void sssp_dijkstra(int root = 1)
{
    int n = adj.size() - 1;
    sssp.resize(n + 1);

    sssp[root] = {root, 0};
    s.insert({0, root});
    while(!s.empty())
    {
        auto p = s.begin();
        int u = p->ss;
        s.erase(s.begin());

        for(auto v : adj[u])
        {
            int dist = sssp[u].cost + v.ss;
            if(dist < sssp[v.ff].cost)
            {
                s.erase({sssp[v.ff].cost, v.ff});
                sssp[v.ff] = {u, dist};
                s.insert({dist, v.ff});
            }
        }
    }
}

void clearAll(int n)
{
    adj.clear();
    adj.resize(n + 1);
    sssp.clear();
}