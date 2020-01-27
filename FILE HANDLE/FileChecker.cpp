#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main()
{
    ifstream i1("OUTPUT.txt"),i2("DEBUG.txt"),i3("INPUT.txt");
    int i=1;
    int n=1;
    while(n--)
    {
        string s;
        getline(i3,s);
    }
    string out1,out2,in;
    int t;
    bool first=1;
    while(i1&&i2)
    {
        string s1,s2,s3;
        getline(i1,s1);
        getline(i2,s2);
        getline(i3,s3);
        if(s1!=s2)
        {
            if(first)
            {
                t=i;
                first=0;
                out1=s1;
                out2=s2;
                in=s3;
            }
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl<<"[{"<<t<<" : "<<in<<"} : "<<out1<<" "<<out2<<"]"<<endl;
    return 0;
}
