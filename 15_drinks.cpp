//https://codeforces.com/problemset/problem/200/B

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,v;
    double sum;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v;
        sum+=v;
    }
    sum=sum/n;
    cout<<fixed<<setprecision(12)<<sum;
    return 0;
}