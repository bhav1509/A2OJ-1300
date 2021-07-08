//https://codeforces.com/problemset/problem/233/A


#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(int i=1;i<=n;i=i+2)
        {
            cout<<i+1<<" "<<i<<" ";
        }
    }
    
    return 0;
}