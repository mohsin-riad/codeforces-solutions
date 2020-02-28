/**
* Git >> Mohsin_Riad
**/
#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 10000
typedef long long ll;
typedef double dd;
/*
ll calc(ll p, ll q)
{
    ll div = p*q;
    return div%10;
}
*/
int main()
{
    IOS

    ll q;
    cin>>q;

    while(q--)
    {
        ll n, m, sum = 0;
        cin>>n>>m;
        ll temp = n/m;

        for(ll i=1; i<=temp ;i++)
        {
            ll div = i*m;
            sum+=(div%10);
        }
        cout<<sum<<endl;
    }

    return (0);
}

