/**
* Git >> Mohsin_Riad

░░░▄█████████████████▄
░░▐████▀▒██████████████▄
░▒██▀▒▒▒▒▒█████████▀█████
░▐██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▌
░▐█▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▌
░░█▒▄▀▀▀▀▀▄▒▒▄▀▀▀▀▀▄▒▐███▌
░░░▐░░░▄▄░░▌▐░░░▄▄░░▌▐███▌
░▄▀▌░░░▀▀░░▌▐░░░▀▀░░▌▒▀▒█▌
░▌▒▀▄░░░░▄▀▒▒▀▄░░░▄▀▒▒▄▀▒▌
░▀▄▐▒▀▀▀▀▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒█
░░░▀▌▒▄██▄▄▄▄████▄▒▒▒▒█▀
░░░░▄██████████████▒▒▐▌
░░░▀███▀▀████▀█████▀▒▌
░░░░░▌▒▒▒▄▒▒▒▄▒▒▒▒▒▒▐
░░░░░▌▒▒▒▒▀▀▀▒▒▒▒▒▒▒▐


**/
#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000
#define endl "\n"
#define pb push_back
#define pob pop_back
typedef long long ll;
typedef double dd;
const int N = 1e6;

int main()
{
    IOS

    ll n;
    cin>>n;
    while(n--)
    {
        ll x, y, z, h ,c;
        cin>>x>>y>>z>>h>>c;

        ll price=0;
        if(x>1)
        {
            if(x%2!=0) x--;
            ll temp = x/2;
            if(h>c)
            {
                if(temp>=y)
                {
                    price = y*h;
                    temp -= y;
                    if(temp<=z) price += temp*c;
                    else price += z*c;
                }
                else price = temp*h;
            }
            else
            {
                if(temp>=z)
                {
                    price = z*c;
                    temp -= z;
                    if(temp<=y) price += temp*h;
                    else price += y*h;
                }
                else price = temp*c;
            }
        }
        else price = 0;
        cout<<price<<endl;
    }
    return (0);
}
