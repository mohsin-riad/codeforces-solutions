/**
* ID : Mohsin_Riad
**/

#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000
typedef long long ll;
typedef double dd;

int sol(ll a, ll b, ll c, ll cnt, ll i)
{
    if(c>-1)
    {
        ll temp1 = a+c;
        ll temp2 = b+i;

        if(temp1 > temp2)
        {
            cnt++;
            return sol(a,b,--c,cnt,++i);
        }
        else
            return cnt;
    }
    else
        return cnt;
}

int main()
{
    IOS

    ll n;
    cin>>n;
    while(n--)
    {
        ll  a, b, c;
        cin>>a>>b>>c;
        ll cnt=0, i = 0;
        cout<<sol(a,b,c,cnt,i)<<"\n";
/*        for(int i=0; c!=-1 ;i++)
        {
            ll temp1 = a+c;
            ll temp2 = b+i;
            if(temp1 > temp2)
                cnt++;
            else
                break;
            c--;
        }
*/
//        cout<<cnt<<"\n";
    }

    return (0);
}

