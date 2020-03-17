mp<node,bool> vis;
struct node{int cost,p,at;};

void dfs(node start,node end)
{
    vis.clear();
    stack<node> s;s.push(start);
    while(!s.empty())
    {
        u=s.top();s.pop();
        vis[u]=1;if(u==end)return;
        for(const node &v : adj[u]){if(!vis.count(v))s.push(v);}
    }
}

void bfs(node start,node end)
{
    vis.clear();
    queue<node> q;q.push(start);
    while(!q.empty())
    {
        u=q.front();q.pop();
        node[u]=1;if(u==end)return;
        for(const node &v : adj[u]){if(!vis.count(v))q.push(v);}
    }
}

bool operator <(const node &lhs,const node &rhs)
{
    if(lhs.cost!=rhs.cost) 
        return lhs.cost<rhs.cost;
    if(lhs.at!=rhs.at)
        return lhs.at<rhs.at;
    return 0;
}
