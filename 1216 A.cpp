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

    char str[n+5];
    cin>>str;

    ll temp=2 , cnt=0;

    while(n>=temp)
    {
        ll a=0, b=0;

        for(int i=temp-2; i<temp ;i++)
        {
            if(str[i] == 97)
                a++;

            if(str[i] == 98)
                b++;
            //cout<<"check: loop1 "<<i<<endl;

        }

        if(a == b){temp += 2;  continue;}

        int k=temp-2;
        //cout<< "a:"<<a<<"b: "<<b<<endl;
        if(a > b)
        {
            //cout<<"check: a>b"<<endl;
            while(k<=temp)
            {
                //cout<<"check: while 1 "<<k<<endl;
                if(str[k] == 97)
                {
                    str[k] = 98;
                    b++;
                    a--;
                    cnt++;
                }
                if(b == a) break;
                else k++;
            }

        }
        else
        {
            //cout<<"check: b>a"<<endl;
            while(k<=temp)
            {
                //cout<<"check: while 2 "<<k<<endl;
                if(str[k] == 98)
                {
                    str[k] = 97;
                    a++;
                    b--;
                    cnt++;
                }
                if(a == b) break;
                else k++;
            }
        }
        temp += 2;
    }
    cout<<cnt<<endl<<str<<endl;

    return (0);
}
