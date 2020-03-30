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