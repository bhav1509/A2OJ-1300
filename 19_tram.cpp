//https://codeforces.com/problemset/problem/116/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,enter,exit,v=0;
    cin>>n;
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>exit>>enter;
        v+=enter-exit;
        if(v>max)
        {
            max=v;
        }
    }
    cout<<max;
    return 0;
}