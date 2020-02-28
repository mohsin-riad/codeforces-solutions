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
const int N = 1e5;

int main()
{
    IOS
    //freopen("input.txt", "r", stdin);

    ll t, n, k;
    cin>>t;
    while(t--)
    {
        ll rem, temp;
        cin>>n>>k;

        rem = n%k;

        if(k/2 < rem)
            temp = (n/k)*k + k/2;
        else
            temp = (n/k)*k + rem;

        cout<<temp<<endl;
    }

    return (0);
}


