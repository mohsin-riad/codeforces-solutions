#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dd;
#define mx 1000

int main()
{
    ios_base::sync_with_stdio(false);

    ll q;
    cin>>q;

    while(q--)
    {
        ll n, k, a[mx], B=0, temp;
        cin>>n>>k;

        for(int i=0; i<n ;i++) cin>>a[i];
        sort(a, a+n);

        for(int i=0; i<n ;i++)
        {

            if(i == (n-1))
                temp= abs(a[i]-a[0]);
            else
                temp= abs(a[i]-a[i+1]);
            if(temp<=k)
                B = a[i];
        }
        if(B!=0)
        {
            if(B != a[0])
            cout<<(k + a[0])<<endl;
            else
                cout<<B<<endl;
        }
        else
            cout<<B-1<<endl;    }
    return (0);
}

