#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    int lowercount=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(islower(s[i]))
        {
            lowercount++;
        }
    }
    if(lowercount>s.length()/2 ||(s.length()%2==0 && lowercount==s.length()/2))
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    cout<<s;
    return 0;
}