/**
* id : Mohsin_Riad
**/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef double dd;

int main()
{
    IOS
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];

        for(int i=0; i<n ;i++)
            cin>>a[i];

        ll temp = a[n-1];
        ll cnt = 0;

        for(int i=(n-1); i>=0 ;i--)
        {
            if(a[i]<=temp)
                temp = a[i];
            else
                cnt++;
        }
        cout<<cnt<<endl;
    }


    return (0);
}
