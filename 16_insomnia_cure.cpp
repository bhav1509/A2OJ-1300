//https://codeforces.com/problemset/problem/148/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;
    //cout<<k<<" "<<l<<" "<<m<<" "<<n<<" "<<d<<endl;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0 ||i%l==0||i%n==0||i%m==0)
        {
            //cout<<i<<endl;
            count++;
        }
    }
    cout<<count;
    return 0;
}