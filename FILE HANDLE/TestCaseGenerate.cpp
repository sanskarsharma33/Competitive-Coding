#include<bits/stdc++.h>
using namespace std;

/*This code will be changed according to generation in test-case.*/
int main()
{

    #ifndef ONLINE_JUDGE
	freopen("TESTCASE.txt","r",stdin);
    	freopen("INPUT.txt","w",stdout);
    #endif
	
    srand(time(0));
    int r=50000;
    cout<<"[";
    for(int i=1;i<r;i++)
	cout<<i<<",";
    cout<<r<<"]\n";
}
