//https://codeforces.com/problemset/problem/80/A


#include <iostream>
using namespace std;

bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int m,n;
    bool flag=false;
    cin>>m>>n;
    for(int i=m+1;i<n;i++)
    {
        //cout<<i<<endl;
        if(isprime(i))
        {
            flag=true;
            break;
        }
    }
    if(flag || !isprime(n))
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}