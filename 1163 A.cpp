/**
* Git >> Mohsin_Riad
**/

#include<bits/stdc++.h>
using namespace std;
#define max 10000
#define endl "\n"
typedef  long long ll;
typedef double dd;
const dd PI = 3.142;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin>>n>>m;
    if(m==0) cout<<n-n+1<<endl;
    else
    {
        if(n != m)cout<<(n/m)<<endl;
        if(n==m) cout<<n-m<<endl;
    }

    return (0);
}



