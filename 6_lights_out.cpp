//https://codeforces.com/problemset/problem/275/A

#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int m[5][5]={0};
    int n[3][3]={0};

    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin>>m[i][j];
        }
    }

    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            n[i-1][j-1]=m[i-1][j]+m[i][j-1]+m[i+1][j]+m[i][j+1];
        }
    }
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            m[i][j]+=n[i-1][j-1];
            if(m[i][j]%2==0)
            {
                m[i][j]=1;
            }
            else
            {
                m[i][j]=0;
            }
            cout<<m[i][j];
        }
        cout<<"\n";
    }
    return 0;
}