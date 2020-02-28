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
    ll arr[n+5];

    for(int i=0; i<n ;i++)
        cin>>arr[i];

    vector<int> v(arr,arr+n), tmp;
    int Max = *max_element(v.begin(),v.end());
    while(Max!=0)
    {
        for(int i=0; i<n ;i++)
        {
            if(v.at(i) == Max)
            {
                tmp.pb(i+1);
                v.at(i) = 0;
            }
        }
        Max = *max_element(v.begin(),v.end());
    }

    sort(arr,arr+n);
    ll temp = 1;

    for(int i=n-1,j=0; i>=0 ;i--,j++)
    {
        if(i==n-1) continue;
        temp += (arr[i]*j) + 1;
        ///cout<<"i: "<<i<<" j: "<<j<<" arr: "<<arr[i]<<" sum: "<<temp<<endl;
    }

    cout<<temp<<endl;
    ll len = tmp.size();

    for(int i=0; i<len ;i++)
        cout<<tmp.at(i)<<" ";






    return (0);
}

