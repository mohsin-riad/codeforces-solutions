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

    char str[105];
    cin>>str;
    int ln = strlen(str);
    int cnt1 = 0, cnt2 = 0;

    for(int i=0; i<ln ;i++)
    {
        if(str[i]>=65 && 90>=str[i])
            cnt1++;
        if(str[i]>=97 && 122>=str[i])
            cnt2++;
    }
    if(cnt1 > cnt2)
    {
        int i=0;
        while(i<ln)
        {
            ///cout<<i<<" "<<str[i]<<" ";
            if(str[i]>=65 && 90>=str[i])
            {
                i++;
                continue;
            }
            str[i] = str[i]-32;
            ///cout<<i<<" "<<str[i]<<" ";
            i++;
        }
    }
    else if(cnt1 <= cnt2)
    {
        int i=0;
        while(i<ln)
        {
            ///cout<<i<<" "<<str[i]<<" ";
            if(str[i]>=97 && 122>=str[i])
            {
                i++;
                continue;
            }
            str[i] = str[i]+32;
            ///cout<<i<<" "<<str[i]<<" ";
            i++;

        }
    }

    cout<<str<<endl;
    return (0);
}

