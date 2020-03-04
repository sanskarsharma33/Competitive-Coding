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
#undef dor
#undef sim
#undef sor
#undef ris



















































// template<typename T>void print(T a);
// template<typename A>void print(const vector<A> &a){bool fir=1;cerr<<"[";
// for(auto x:a){if(!fir)cerr<<", ";print(x);fir=0;}cerr<<"]";}
// template<typename T,typename G>void print(const pair<T,G> &a)
// {cerr<<"(";print(a.first);cerr<<", ";print(a.second);cerr<<")";}

// template<typename T,typename G>void print(const map<T,G> &a){bool fir=1;cerr<<"{";for(auto x:a){
// if(!fir)cerr<<", ";print(x.first);cerr<<" : ";print(x.second);fir=0;}cerr<<"}";}

// template<typename T>void print(const set<T> &a)
// {bool fir=1;cerr<<"{";for(auto x:a){if(!fir)cerr<<", ";print(x);fir=0;}cerr<<"}";}

// template<typename T>void print(T a){cerr<<a;}






// string to_string(const char a){char arr[]={a,'\0'};string x(arr);return x;}
// string to_string(const string& s){return '"'+s+'"';}
// string to_string(const char* s){return to_string((string) s);} 
// string to_string(bool b){return (b?"TRUE":"FALSE");}
// string to_string(vector<bool> v){bool first=1;string res="{";for(int i=0;i<static_cast<int>(v.size());i++){
// if(!first){res+=", ";}first=0;res+=to_string(v[i]);}res+="}";return res;} 
// template <typename A>string to_string(A v){bool first=1;string res="{";
// for(const auto &x : v){if(!first){res+=", ";}first=0;res+=to_string(x);}res+="}";return res;}
// template<typename A,typename B>string to_string(pair<A, B> p)
// {return "("+to_string(p.first)+", "+to_string(p.second)+")";}



/*** other **********

template <typename A, typename B>string to_string(pair<A, B> p);
template<typename A,typename B,typename C>string to_string(tuple<A, B, C> p);
template <typename A, typename B, typename C, typename D>string to_string(tuple<A, B, C, D> p);

template<typename A,typename B,typename C>string to_string(tuple<A, B, C> p)
{return"("+to_string(get<0>(p))+", "+to_string(get<1>(p))+", "+to_string(get<2>(p))+")";}
template<typename A,typename B,typename C,typename D>string to_string(tuple<A, B, C, D> p)
{return "("+to_string(get<0>(p))+", "+to_string(get<1>(p))+", "+to_string(get<2>(p))+", "+to_string(get<3>(p))+")";}

********************/

/*
    template <size_t N>string to_string(bitset<N> v){string res="";
    for(size_t i=0;i<N;i++){res+=static_cast<char>('0'+v[i]);}return res;}
*/


/**************************For All******************
template <class Ch, class Tr, class Container>
basic_ostream <Ch, Tr> & operator << (basic_ostream <Ch, Tr> & os, Container const& x) {
    os << "{ ";
    for(auto& y : x) os << y << " ";
    return os << "}";
}
*/

/*
    \##############################/
    int limit=ceil(sqrt(x))+1;
    auto is_prime=[&limit](const int& x)->bool{loop(i,2,limit){if(x%i==0)return 0;}return 1;};
    typeof(is_prime)=function<bool (int)> 
    /##############################\
    print_the_whole_array
    auto func=[](const int& x)->void{cout<<x<<" ";};
    for_each(v.begin(),v.end(),func);
    \##############################/
    return_the_total_count_of_numbers_which_are_greater_than_5
    auto func=[](const int& x)->bool{return x>5;}
    int count=count_if(v.begin(),v.end(),func);
    /##############################\
*/

/*
    //Return Type
    __builtin_popcount(x) : int
    __builtin_popcountl(x) : long int
    __builtin_popcountll(x) : long long int
*/
