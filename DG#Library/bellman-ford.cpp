const ll INF = INT_MAX;
struct edge
{
    int u, v;
    ll cost;
};
string to_string(const edge &a)
{
    #ifdef DEBUG
        vl res = {a.u, a.v, a.cost};
        return to_string(res);
    #endif
        return "";
}

struct node
{
    int p;
    ll cost = INF;
};

vector<vector<pair<int, ll>>> adj;
vector<edge> edges;
vector<node> sssp;

void add_edge(vector<vector<pair<int, ll>>> &a, int u, int v, ll w, bool dir = 0)
{
    a[u].push_back({v, w});
    if(!dir)
        a[v].push_back({u, w});
}

int fill_bf()
{
    int n = adj.size() - 1;
    int size = 0;
    for(int u = 1 ; u <= n ; u++)
    {
        for(auto v : adj[u])
            size++;
    }

    edges.resize(size);
    for(int u = 1, i = 0 ; u <= n ; u++)
    {
        for(auto v : adj[u])
            edges[i++] = {u, v.ff, v.ss};
    }
    return size;
}

void sssp_bf(int root = 1)
{
    int n = adj.size() - 1, cur;
    int m = fill_bf();

    sssp.resize(n + 1);
    sssp[root].cost = 0;

    bool changed;

    // if we want to find negative cycle then we need to iterate till n
    for(int i = 1 ; i < n ; i++)
    {
        // cur = -1;
        changed = false;
        for(int j = 0 ; j < m ; j++)
        {
            ll dis = sssp[edges[j].u].cost;
            if(dis < INT_MAX)
            {
                dis += edges[j].cost;
                if(dis < sssp[edges[j].v].cost)
                {
                    sssp[edges[j].v] = {edges[j].u, max(-INF, dis)};
                    // cur = edges[j].v;
                    changed = true;
                }
            }
        }

        if(!changed)
            break;
    }

    /*
    // to find a negative cycle, is still remaining...

    // will retrun true if graph contains negative cycle
    if(~cur)
        return true;
    return false;

    */
}