#include<bits/stdc++.h>
using namespace std;

#define DHRUV_GHEEWALA 7
#define DEBUG
#ifdef DEBUG

    #define wspc "\n\t "
    #define cline cerr<<"Line : "<<__LINE__<<", "
    #define p(str) cerr<<str
    #define o(str) cerr<<str
    #define fundri cerr<<"----------\n"
    #define sim template<typename T,typename U>string to_string
    #define dor template<typename T>string to_string
    #define sor string to_string

    sim(pair<T,U> p);
    sor(const string &s){return '"'+s+'"';}
    sor(const char *s){return to_string((string)s);}
    sor(const bool b){return b?"true":"false";}
    sor(char c){string res(3,'\'');res[1]=c;return res;}
    
    // vector<bool>
    sor(vector<bool> v)
    {
        bool fir = 1;
        string res = "{";
        for(bool b : v)
        {
            if(!fir)
                res += ", ";
            fir = 0;
            res += to_string(b);
        }
        res += "}";
        return res;
    }
    
    template<size_t N>sor(bitset<N> v){string res="";for(int i=0;i<N;i++)res+=static_cast<char>(v[i]+'0');return res;}

    // priority_queue
    dor(priority_queue<T> pq)
    {
        string res = "{";
        bool fir = 1;
        while(!pq.empty())
        {
            if(!fir)
                res += ", ";
            fir = 0;
            res += to_string(pq.top());
            pq.pop();
        }
        return res + "}";
    }


    dor(T v){bool fir=1;string res="{";for(const auto &x : v){if(!fir)res+=", ";fir=0;res+=to_string(x);}res+="}";return res;}
    sim(pair<T,U> p){return "{"+to_string(p.first)+", "+to_string(p.second)+"}";}

    void debug(){cerr<<wspc[0];}
    template<typename Head,typename... Tail>
    void debug(Head H,Tail... T){cerr<<" "<<to_string(H);debug(T...);}
    #define d(...) cerr<<"["<<#__VA_ARGS__<<"] :",debug(__VA_ARGS__)

    void begginingOfCode(int tc)
    {
        cerr << "====================================================================================\n";
        cerr << "Test #" << tc << " : \n";
    }

    void begginingOfCode(char tc)
    {
        cerr << "====================================================================================\n";
        cerr << "Test #" << tc << " : \n";
    }

#else

    #define p(str) 42
    #define o(str) 108
    #define fundri 137
    #define d(...) 1729

#endif


/************ END ************/
#undef dor
#undef sim
#undef sor



















































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