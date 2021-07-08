//https://codeforces.com/problemset/problem/339/A


#include <iostream>
#include <vector>
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
    int j=0;
    vector<int> arr;
    cin>>s;
    
    for(int i=0;i<s.length();i=i+2)
    {
        // cout<<(int)s[i]-48<<endl;
        arr.push_back((int)s[i]-48);
        j++;
    }
    sort(arr.begin(),arr.end());
    // for(int i=0;i<j;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    for(int i=0;i<j;i++)
    {
        if(i==j-1)
        {
            cout<<arr[i];
            break;
        }
        cout<<arr[i]<<"+";
    }
    return 0;
}