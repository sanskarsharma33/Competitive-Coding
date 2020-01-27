//__builtin_clz(num) --> clz = count leading zero’s
//__builtin_ctz(num) --> ctz = count trailing zeros
//inline int LeftOne(int x){return (__builtin_clz(INT_MAX) - __builtin_clz(x)+1);}
inline int RightOne(int x){return (__builtin_ctz(x)+1);}
inline void setbit(int &x,int pos){x|=(1LL<<pos);}
inline void clearbit(int &x,int pos){x&=~(1LL<<pos);}
inline bool givebit(int x,int pos){return ((x&(1LL<<pos))!=0);}
inline int bits(int x){return __builtin_popcount(x);}