//https://codeforces.com/contest/69/problem/A

#include <iostream>
using namespace std;

int main()
{
    int n,resi=0,resk=0,resj=0;
    cin>>n;
    for(int x=0;x<n;x++)
    {
        int i,j,k;
        cin>>i>>j>>k;
        resi+=i;
        resj+=j;
        resk+=k;
    }
    if(resi==0&&resj==0&&resk==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}