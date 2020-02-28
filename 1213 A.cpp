/**
* ID >> Mohsin_Riad
**/

#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 10000
typedef long long ll;
typedef double dd;

int main()
{
    IOS
    int n, cnt1=0, cnt2=0;
    cin>>n;
    ll x[n+5];

    for(int i=0; i<n ;i++)
    {
        cin>>x[i];

        if(x[i]%2==0) cnt1++;
        else cnt2++;
    }

    if(cnt1>cnt2) cout<<cnt2<<endl;
    else cout<<cnt1<<endl;

    return (0);
}

