//https://codeforces.com/problemset/problem/281/A

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
    if(islower(s[0]))
    {
        s[0]=toupper(s[0]);
    }
    cout<<s;
    return 0;
}