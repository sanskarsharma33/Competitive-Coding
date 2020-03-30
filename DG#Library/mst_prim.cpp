struct edge
{
    int u, v;
    ll w;

    friend bool operator <(const edge &lhs, const edge &rhs)
    {
        return lhs.w > rhs.w;
    }
};

string to_string(const edge &x)
{
    #ifdef DEBUG
        return "{" + to_string(x.u) + ", " + to_string(x.v) + ", " + to_string(x.w) + "}";
    #endif
        return "";
}

vector<vector<pair<int, ll>>> adj, mst;
priority_queue<edge> pq;
vector<bool> vis;

void add_edge(vector<vector<pair<int, ll>>> &a, int u, int v, ll w, bool dir = 0)
{
    a[u].push_back({v, w});
    if(!dir)
        a[v].push_back({u, w});
}

void fill_adj(int u)
{
    for(const auto &v : adj[u])
    {
        if(!vis[v.ff])
            pq.push({u, v.ff, v.ss});
    }
}

ll mst_prim(int root = 1)
{
    int n = adj.size() - 1;
    // dsu a(n);
    ll cost = 0;
    int edge = 0;

    mst.resize(n + 1);
    vis.assign(n + 1, 0);
    fill_adj(root);
    vis[root] = 1;

    while(!pq.empty())
    {
        auto x = pq.top();
        pq.pop();

        if(vis[x.v])
            continue;

        vis[x.v] = 1;
        mst[x.u].push_back(x.v);
        cost += x.w;
        edge++;

        if(edge == n - 1)
            break;

        fill_adj(x.v); 
    }

    if(edge < n - 1)
        return LLONG_MAX;
    return cost;
}