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
    string str;
    int t;
    cin>>t;
    while(t--)
    {
        bool flag = false;
        cin>>str;
        for(int i=0; i<str.length() ;i++)
        {
            if(str[i] == str[i+1] && str[i]!='?') {flag = true; break;}
            if(str[i]=='?')
            {
                if(i!=0)
                {
                    if(str[i-1]!='a' && str[i+1]!='a')
                        str[i] = 'a';
                    else if(str[i-1]!='b' && str[i+1]!='b')
                        str[i] = 'b';
                    else if(str[i-1]!='c' && str[i+1]!='c')
                        str[i] = 'c';
                }
                else
                {
                    if(str[i+1]!='a')
                        str[i] = 'a';
                    else if(str[i+1]!='b')
                        str[i] = 'b';
                    else if(str[i+1]!='c')
                        str[i] = 'c';
                }
            }
        }
        if(flag == 1) cout<<"-1"<<endl;
        else cout<<str<<endl;
    }
    return (0);
}

