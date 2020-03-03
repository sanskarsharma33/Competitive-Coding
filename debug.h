#include<bits/stdc++.h>
using namespace std;

#define DHRUV_GHEEWALA 7

#define wspc "\n\t "
#define cline cerr<<"Line : "<<__LINE__<<", "
#define p(str) cline<<str
#define o(str) cerr<<str
#define fundri cerr<<"----------\n"
#define sim template<typename T,typename U>inline ostream& operator << 
#define dor template<typename T>inline ostream& operator << 
#define sor ostream& operator << 
#define ris return out

sor(ostream &out, const char *a){out<<(string)a;ris;}
sor(ostream &out, const bool a){out<<(a?"TRUE":"FALSE");ris;}
sim(ostream &out, const pair<T,U> &a){out<<"("<<a.first<<", "<<a.second<<")";ris;}
sim(ostream &out, const map<T,U> &a){bool fir=1;out<<"{";for(auto x:a){if(!fir)out<<", ";
fir=0;out<<x.first<<" : "<<x.second;}out<<"}";ris;}
sim(ostream &out, const unordered_map<T,U> &a){bool fir=1;out<<"{";for(auto x:a){if(!fir)out<<", ";
fir=0;out<<x.first<<" : "<<x.second;}out<<"}";ris;}
dor(ostream &out, const set<T> &a){bool fir=1;out<<"{";for(auto x:a){if(!fir)out<<", ";fir=0;out<<x;}out<<"}";ris;}
dor(ostream &out, const vector<T> &a){bool fir=1;out<<"[";for(auto x:a){if(!fir)out<<", ";fir=0;out<<x;}out<<"]";ris;}

#define d(...) cline<<"["<<#__VA_ARGS__<<"] : ",debug(__VA_ARGS__)
void debug(){cerr<<wspc[0];}
template<typename Head,typename... Tail>
void debug(Head H, Tail... T){cerr<<H;debug(T...);}


/************ END ************/
