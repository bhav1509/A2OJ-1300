//https://codeforces.com/problemset/problem/110/A

#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='7'||s[i]=='4')
        {
            count++;
        }
    }
    //cout<<count;
    // if(s.length()==count)
    // {
    //     cout<<"YES";
    // }
    if((count==4 ||count==7))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}