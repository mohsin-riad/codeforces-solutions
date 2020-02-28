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
const int N = 1e7;

set<ll> bosta[26];

int main()
{
    IOS

    char str[1000000];
    cin>>str;
    ll len = strlen(str);
    for(ll i=1; i<=len ;i++) bosta[s[i-1]-'a'].insert(i);
    ll qry;
    cin>>qry;
    while(qry--)
    {
        int pos, beg, end, n, cnt=1;
        vector <char> v;
        char c;

        cin >> n;

        if (n == 1)
        {
            cin >> pos >> c;
            bosta[str[pos - 1]-'a'].erase(pos);
            str[pos - 1] = c;
            bosta[c - 'a'].insert(pos);

            ///cout<<endl<<"test 1 string : "<<s<<endl;
        }
        else if (n == 2)
        {
            cin>>beg>>end;
            beg-=1;
            end-=1;
            ///cout<<"\t"<<"test 2 string : "<<endl;
            for(int i= beg; i <= end; i++)
            {
                v.push_back(str[i]);
                ///cout<<"test 3 string : "<<str[i]<<endl;
            }

            sort(v.begin(), v.end());

            int temp = (end - beg+1);

            for (int i=1; i < temp ;i++)
                if (v[i] != v[i-1]) cnt++;
            cout <<cnt<< endl;
        }
    }
    return (0);
}
