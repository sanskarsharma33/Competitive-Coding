/*
	to find cube root of a number : cbrt(num)

	copy_n(source, 5, target);
	
	//changes a to {10, 11, 12, 13, 14} 
	iota(a, a+5, 10);  
	iota(c, c+3, 'a');  --> {'a', 'b', 'c'}

	random_shuffle(all(vector))

*/

inline string IntToString(ll a){char x[100];sprintf(x,"%lld",a);string s=x;return s;}
inline ll StringToInt(string a){char x[100];ll res;strcpy(x,a.c_str());sscanf(x,"%lld",&res);return res;}
inline void toupper(string &s){int n=s.length();rep(i,n){if(in_range(s[i],'a','z'))s[i]=s[i]-'a'+'A';}}
inline void tolower(string &s){int n=s.length();rep(i,n){if(in_range(s[i],'A','Z'))s[i]=s[i]-'A'+'a';}}