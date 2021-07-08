//https://codeforces.com/problemset/problem/248/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    //vector<vector<int> > doors(n,(vector<int>(1)));
    int leftopen=0;
    int rightopen=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        leftopen+=a;
        rightopen+=b;
    }
    int leftclosed=n-leftopen;
    int rightclosed=n-rightopen;

    int ans=0;
    // cout<<leftopen<<endl;
    // cout<<leftclosed<<endl;
    // cout<<rightopen<<endl;
    // cout<<rightclosed<<endl;
    
    if(leftopen==leftclosed)
    {
        ans+=leftopen;
    }
    else if(leftopen>leftclosed)
    {
        ans+=leftclosed;
    }
    else
    {
        ans+=leftopen;
    }
    // cout<<ans<<endl;
    if(rightopen==rightclosed)
    {
        ans+=rightopen;
    }
    else if(rightopen>rightclosed)
    {
        ans+=rightclosed;
    }
    else
    {
        ans+=rightopen;
    }
    cout<<ans;

    return 0;
}