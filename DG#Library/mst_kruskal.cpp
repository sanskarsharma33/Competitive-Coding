class dsu
{

public:
    vi parent;
    multiset<int> sizes;
    set<int> roots;
    int components,nodes;

    dsu():components(0),nodes(0){};
    dsu(int size){init(max(1,size));}

    void init(int size)
    {
        parent.assign(size+1,-1);
        nodes = components = size;
        for(int i = 1; i <= size ; i++)
        {
            sizes.insert(1);
            roots.insert(i);
        }
    }

    int find(int x)
    {
        return parent[x]<0?x:parent[x]=find(parent[x]);
    }

    int size(int set)
    {
        return -parent[find(set)];
    }

    // if choice is true, then x will be 
    // parent of y and it's child
    bool merge(int x, int y, bool choice=0)
    {
        x=find(x);
        y=find(y);

        if(x==y)return 0;
        if(!choice && size(x)<size(y))swap(x,y);

        sizes.erase(sizes.find(size(x)));
        sizes.erase(sizes.find(size(y)));
        roots.erase(y);

        parent[x] += parent[y];  // changing the size of x. (i.e. root node)
        parent[y] = x;
        sizes.insert(size(x));

        components--;
        return 1;
    }

};

string to_string(const dsu &a)
{
    #ifdef DEBUG
        return "Parent --> " + to_string(a.parent) + '\n' + 
        "       Roots --> " + to_string(a.roots);
    #endif

    return "";
}

struct edge
{
    int u, v;
    ll w;

    friend bool operator <(const edge &lhs, const edge &rhs)
    {
        return lhs.w < rhs.w;
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
vector<edge> kruskal_util;

void add_edge(vector<vector<pair<int, ll>>> &a, int u, int v, ll w, bool dir = 0)
{
    a[u].push_back([v, w]);
    if(!dir)
        a[v].push_back({u, w});
}

void build_kruskal()
{
    // kruskal_util[u] = {p, {q, r}} where,
    // p is weight of the edge q --> r
    int n = adj.size() - 1;
    mst.resize(n + 1);
    for(int u = 1; u <= n; u++)
    {
        for(const auto &v : adj[u])
            kruskal_util.push_back({u, v.ff, v.ss});
    }
    sort(all(kruskal_util));
}

ll mst_kruskal()
{
    int n = adj.size() - 1;
    dsu a(n);
    ll cost = 0;
    int edges = 0;

    for(const auto &e : kruskal_util)
    {
        if(a.find(e.u) == a.find(e.v))continue;

        a.merge(e.u, e.v);
        cost += e.w;
        add_edge(mst, e.u, e.v, e.w);
        // mst[e.u].push_back(e.v);
        edges++;

        if(edges == n - 1)
            break;
    }

    if(edges < n-1)
        return LLONG_MAX;
    return cost;
}