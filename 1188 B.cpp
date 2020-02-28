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
#pragma GCC optimize("O3")
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

unsigned int mod(unsigned int a, unsigned int b)
{
    int tmp = a/b;
    return a - (b*tmp);
}

unsigned lol_mod(unsigned int x, unsigned int y)
{
  return y & (y-1) ? x % y : x & (y-1);
}

unsigned int fast_mod(unsigned int input, unsigned int ceil)
{
    return input >= ceil ? input % ceil : input;
}

int main()
{
    IOS
    freopen("input.txt", "r", stdin);

    ll n, p, k, cnt = 0;
    cin>>n>>p>>k;

    ll ans = mod(k,p);
    ///cout<<ans<<endl;

    unsigned int arr[N];
    for(int i=0; i<n ;i++) cin>>arr[i];

    sort(arr, arr+n);
    for(int i=0; i<n-1 ;i++)
        for(int j=i+1; j<n ;j++)
        {
            cout<<"-"<<arr[i]<<"-"<<arr[j]<<endl;
            ll temp = (arr[i]+arr[j]) * ((arr[i]*arr[i])+(arr[j]*arr[j]));
            ll tmp = mod(temp,p);
            if(tmp == ans) {
                cnt++;
                cout<<"^^"<<endl;
            }
        }
    cout<<cnt<<endl;

    return (0);
}
