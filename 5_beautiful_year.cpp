//https://codeforces.com/problemset/problem/271/A

#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int y;
    cin>>y;
    //cout<<y<<endl;
    y=y+1;
    int d1= y%10;
    int d2= (y%100)/10;
    int d3= (y%1000)/100;
    int d4= (y/1000);
    while(d1==d2 ||d1==d3 ||d1==d4 ||d2==d3 ||d2==d4 ||d3 ==d4)
    {
        // cout<<y<<endl;
        y=y+1;
        d1= y%10;
        d2= (y%100)/10;
        d3= (y%1000)/100;
        d4= (y/1000);
        // cout<<d1<<endl;
        // cout<<d2<<endl;
        // cout<<d3<<endl;
        // cout<<d4<<endl;
    }
    cout<<y;
    return 0;
}