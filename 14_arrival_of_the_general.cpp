//https://codeforces.com/problemset/problem/144/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    vector<int> arr(n);
    int small=0,big=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        //cout<<arr[i]<<endl;
        if(arr[small]>=arr[i])
        {
            small=i;
        }
        if(arr[big]<arr[i])
        {
            big=i;
        }
        //cout<<small<<" "<<big<<endl;
    }
    if(small<big)
    {
        big=big-1;
    }
    small=(n-(small+1));
    //cout<<small<<" "<<big<<endl;
    cout<<small+big;
    return 0;
}