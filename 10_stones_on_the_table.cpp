//https://codeforces.com/problemset/problem/266/A


#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,count=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        //cout<<"S[i]:"<<s[i]<<endl;
        //cout<<"S[i+1]:"<<s[i+1]<<endl;
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}