//https://codeforces.com/problemset/problem/155/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,value,small,big,v=0;
    cin>>n;
    cin>>value;
    small=value;
    big=value;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(value>big)
        {
            v++;
            big=value;
        }
        if(value<small)
        {
            v++;
            small=value;
        }
    }
    cout<<v;
    
    return 0;
}