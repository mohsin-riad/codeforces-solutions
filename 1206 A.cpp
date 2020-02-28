/**
* Git >> Mohsin_Riad
**/

#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000
typedef long long ll;
typedef double dd;

int main()
{
    IOS

    ll n,m;
    cin>>n;

    int a[n+5];
    for(int i=0; i<n ;i++) cin>>a[i];
    cin>>m;
    int b[m+5];
    for(int i=0; i<m ;i++) cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);

    cout<<a[n-1]<<" "<<b[m-1]<<"\n";
    return (0);
}
