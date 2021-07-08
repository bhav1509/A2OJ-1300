//https://codeforces.com/problemset/problem/61/A

#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string x,y;
    cin>>x>>y;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]==y[i])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }
    return 0;
}