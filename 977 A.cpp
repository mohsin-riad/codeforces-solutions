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

    ll n, k, cnt=0;
    cin>>n>>k;

    while(true)
    {
        if(cnt==k) break;

        if(n%10 != 0)
        {
            n--;
            cnt++;
        }
        else
        {
            n /= 10;
            cnt++;
        }
    }

    cout<<n<<endl;

    return (0);
}
