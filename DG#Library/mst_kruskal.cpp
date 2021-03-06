/****
  ** Time Complexity(building) : O(E * LogE)
  ** Time Complexity : O(E * LogV)
  ** Space Complexity : O(V + E)
****/

const int INF = LLONG_MAX - 2LL * INT_MAX;
struct dsu
{
    vi parent;

    dsu(int size)
    {
        parent.assign(size + 1, -1);
    }

    int find(int x)
    {
        return parent[x]<0?x:parent[x]=find(parent[x]);
    }

    int size(int set)
    {
        return -parent[find(set)];
    }

    bool merge(int x, int y, bool choice=0)
    {
        x=find(x);
        y=find(y);

        if(x==y)return 0;
        if(!choice && size(x)<size(y))swap(x,y);

        parent[x] += parent[y];
        parent[y] = x;

        return 1;
    }

    void clear()
    {
        parent.clear();
    }
};

string to_string(const dsu &a)
{
    #ifdef DEBUG
        string res = "Parent --> " + to_string(a.parent) + '\n';
        return res;
    #endif

    return "";
}

struct edge
{
    int u, v, w;

    friend bool operator <(const edge &lhs, const edge &rhs)
    {
        if(lhs.w == rhs.w)
        {
            if(lhs.u == rhs.u)
                return lhs.v < rhs.v;
            return lhs.u < rhs.u;
        }
        return lhs.w < rhs.w;
    }
};

string to_string(const edge &a)
{
    #ifdef DEBUG
        vi res = {a.w, a.u, a.v};
        return to_string(res);
    #endif
        return "";
}

typedef vector<vector<pii>> graph;
graph adj;
vector<edge> krushkal_util, mst;

void add_edge(graph &a, int u, int v, int w)
{
    adj[u].push_back({v, w});
}

void build_krushkal()
{
    int size, cur;
    int n = adj.size() - 1;

    size = cur = 0;
    for(int i = 1 ; i < n + 1 ; i++)
        size += adj[i].size();

    krushkal_util.resize(size);
    for(int i = 1 ; i < n + 1 ; i++)
        for(auto &p : adj[i])
            krushkal_util[cur++] = {i, p.ff, p.ss};

    sort(all(krushkal_util));
}

int krushkal(bool isBuildRequired = true)
{
    if(isBuildRequired)
        build_krushkal();

    int cost, edges;
    int n = adj.size() - 1;
    dsu disj(n);
    mst.resize(n - 1);

    cost = edges = 0;
    for(edge &e : krushkal_util)
    {
        if(disj.merge(e.u, e.v))
        {
            mst[edges] = e;
            cost += e.w;
            edges++;

            if(edges == n - 1)
                break;
        }
    }

    if(edges != n - 1)
        return INF;
    return cost;
}

void clearAll(int n)
{
    adj.clear();
    adj.resize(n + 1);

    krushkal_util.clear();
    mst.clear();
}