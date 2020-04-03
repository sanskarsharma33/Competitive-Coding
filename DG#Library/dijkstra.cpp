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

int sssp_dijkstra(int root = 1, int dest = -1)
{
    int n = adj.size() - 1;
 
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<node> sssp(n + 1);
    vector<bool> vis(n + 1, false);
 
    sssp[root] = {root, 0};
    pq.push({0, root});
    
    while(!pq.empty())
    {
        auto p = pq.top();
        int u = p.ss;
        pq.pop();
        if(u == dest && vis[u])
            return sssp[u].cost;

        if(!vis[u])
        {
            vis[u] = 1;
            for(auto v : adj[u])
            {
                int dist = sssp[u].cost + v.ss;
                if(dist < sssp[v.ff].cost && !vis[v.ff])
                {
                    sssp[v.ff] = {u, dist};
                    pq.push({dist, v.ff});
                }
            }
        }
    }
    if(~dest) return sssp[dest].cost;
    return INF;
}

void clearAll(int n)
{
    adj.clear();
    adj.resize(n + 1);
    sssp.clear();
}