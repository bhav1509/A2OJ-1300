//https://codeforces.com/problemset/problem/32/B

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
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        {
            cout<<"0";
        }
        else if(s[i]=='-' &&s[i+1]=='-')
        {
            cout<<"2";
            i++;
        }
        else
        {
            cout<<"1";
            i++;
        }
    }
    return 0;
}