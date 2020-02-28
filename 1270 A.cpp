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

    int t, n, k1, k2;;
    cin>>t;

    while(t--)
    {
        cin>>n>>k1>>k2;
        int p1[k1], p2[k2];

        for(int i=0; i<k1 ;i++) cin>>p1[i];
        int temp1 = *max_element(p1, p1 + k1);

        for(int i=0; i<k2 ;i++) cin>>p2[i];
        int temp2 = *max_element(p2, p2 + k2);

        if(temp1 > temp2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return (0);
}

