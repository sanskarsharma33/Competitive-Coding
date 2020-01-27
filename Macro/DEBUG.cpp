#include<bits/stdc++.h>
using namespace std;

#define DHRUV_GHEEWALA 7
#define wspc "\n\t "

#define cline cerr<<"Line : "<<__LINE__<<", "
#define p(str) cline<<#str
#define o(str) cline<<str
#define fundri cerr<<"#################\n"
	
//to_string
string to_string(const char a){char arr[]={a,'\0'};string x(arr);return x;}
template <typename A, typename B>string to_string(pair<A, B> p);
template<typename A,typename B,typename C>string to_string(tuple<A, B, C> p);
template <typename A, typename B, typename C, typename D>string to_string(tuple<A, B, C, D> p);
string to_string(const string& s){return '"'+s+'"';}
string to_string(const char* s){return to_string((string) s);} 
string to_string(bool b){return (b?"1":"0");}
string to_string(vector<bool> v){bool first=1;string res="{";for(int i=0;i<static_cast<int>(v.size());i++){
if(!first){res+=", ";}first=0;res+=to_string(v[i]);}res+="}";return res;} 
template <size_t N>string to_string(bitset<N> v){string res="";
for(size_t i=0;i<N;i++){res+=static_cast<char>('0'+v[i]);}return res;}
template <typename A>string to_string(A v){bool first=1;string res="{";
for(const auto &x : v){if(!first){res+=", ";}first=0;res+=to_string(x);}res+="}";return res;}
template<typename A,typename B>string to_string(pair<A, B> p)
{return "("+to_string(p.first)+", "+to_string(p.second)+")";}
template<typename A,typename B,typename C>string to_string(tuple<A, B, C> p)
{return"("+to_string(get<0>(p))+", "+to_string(get<1>(p))+", "+to_string(get<2>(p))+")";}
template<typename A,typename B,typename C,typename D>string to_string(tuple<A, B, C, D> p)
{return "("+to_string(get<0>(p))+", "+to_string(get<1>(p))+", "+to_string(get<2>(p))+", "+to_string(get<3>(p))+")";}


#define d(...) cline<<"["<<#__VA_ARGS__<<"] :",debug(__VA_ARGS__)
void debug() {cerr<<wspc[0];}
template<typename Head,typename... Tail>
void debug(Head H, Tail... T){cerr<<" "+to_string(H);debug(T...);}

/******* END *******/


/*
 *************************For All******************
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