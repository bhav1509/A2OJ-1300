//https://codeforces.com/problemset/problem/263/A

#include <iostream>
//#include <math.h> 
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int x,pos=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>x;
            if(x==1)
            {
                pos=abs(i-2)+abs(j-2);
                break;
            }
        }
    }
    cout<<pos;
    return 0;
}