//https://codeforces.com/problemset/problem/228/A


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
    int count=0;
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(arr[i]==arr[j] && arr[i]!=-1 && arr[j]!=-1)
            {
                arr[j]=-1;
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}

