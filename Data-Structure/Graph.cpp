//type1 : node      type2 : edge-length
template<typename Type1,Type2>
class Graph
{
     map<Type1,list<pair<Type1,Type2>>> m;

public:
     void addEdge(Type1 u,Type1 v,Type2 dist,bool bidir=1)
     {
          m[u].push_back({v,dist});
          if(bidir)
               m[v].push_back({u,dist});
     }
     
     void prType2Adj()
     {
          for(auto i : m)
          {
               cout<<i.first<<"-->";
               for(auto j : i.second)
                    cout<<"("<<j.first<<","<<j.second<<")";
               cout<<wspc[0];
          }
     }

     void dijsktra(Type1 src)
     {
          map<Type1,Type2> dist;
          for(auto i : m)
               dist[i.first]=INType1_MAX;

          //make a set to find out node with the minimum dustance
          set<pair<Type2,Type1>> s;
          dist[src]=0;
          s.insert({0,src});

          while(!s.empty())
          {
               auto it=*s.begin();
               Type1 node=it.second;
               Type2 nodedist=it.first;
               s.erase(s.begin());

               for(auto childpair : m[node])
               {
                    if((nodedist+childpair.first)<dist[childpair.first])
                    {
                         Type1 nnode=childpair.first;
                         auto f=s.find({dist[nnode],nnode});
                         if(f!=s.end())
                              s.erase(f);

                         dist[nnode]=nodedist+childpair.second;
                         s.insert({dist[nnode],nnode});
                    }
               }
          }
     }
};
