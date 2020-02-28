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
typedef unsigned long long ll;
typedef double dd;
const int N = 1e5;

unsigned int fast_mod(unsigned int a, unsigned int b)
{
    return a >= b ? a % b : a;
}

int main()
{
    IOS
    //freopen("input.txt", "r", stdin);

    ll n, m, cnt = 0;
    cin>>n>>m;

    ll N = min(n,m);
    for(int i=1; i<=N ;i++)
    {
        ll col = 0, row=n/m;
        for(int j=1; j<=N ;j++)
        {
            ll temp = fast_mod((fast_mod(i,m)*fast_mod(i,m) + fast_mod(j,m)*fast_mod(j,m)),m);
            if(temp == 0)
            {
                if(n%m >=1 && j<=n%m)
                    col++;
                col += n/m;
            }
        }
        if(n%m >=1 && i<=n%m)
            row++;
        cnt += row*col;
    }
    cout<<cnt<<endl;

    return (0);
}
