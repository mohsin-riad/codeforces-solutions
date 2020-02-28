#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1000000

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string arr;
    ll cnt = 0, x;
    cin>>x>>arr;
    for(int i=0; i<x ;i++)
    {
        ll temp = arr[i] -'0';
        if(temp%2 == 0)
            cnt+=(i+1);
    }
    cout<<cnt<<"\n";
    return (0);
}
