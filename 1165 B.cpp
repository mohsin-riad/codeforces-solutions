#include<bits/stdc++.h>
using namespace std;

#define max 10000
typedef long long ll;
typedef double dd;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    ll temp = 1;

    cin>>n;
    ll arr [n+2];

    for(ll i=0; i<n ;i++)
        cin>>arr[i];

    sort(arr, arr + n);

    for(ll i=0; i<n ;i++)
        if(temp <= arr[i])
            temp++;

    cout<<temp-1<<"\n";
    return (0);
}




