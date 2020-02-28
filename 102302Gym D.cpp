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
const ll N = 1e6;

char A[N];
char B[N];

int LCS_rec(ll a,ll b)
{
    ll LCS_temp[a+1][b+1];

    for (int i=0; i<=a; i++)
        for (int j=0; j<=b; j++)
        {
            if (i == 0 || j == 0)
                LCS_temp[i][j] = 0;
            else if (A[i-1] == B[j-1])
                LCS_temp[i][j] = 1+LCS_temp[i-1][j-1];
            else
                LCS_temp[i][j] = max(LCS_temp[i-1][j], LCS_temp[i][j-1]);
        }
    return LCS_temp[a][b];
}

int main()
{
    IOS

    cin>>A>>B;
    ll a = strlen(A);
    ll b = strlen(B);

    if(b == LCS_rec(a,b)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return (0);
}

