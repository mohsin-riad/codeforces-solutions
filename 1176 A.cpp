#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dd;
#define mx 1000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;
    for(int i=0; i<q ;i++)
    {
        ll n, temp = -1, cnt=0;
        cin>>n;
        while(n != 1)
        {
            if(n%5 == 0){
                n = (4*n)/5;
                cnt++;
            }
            else if(n%3 == 0){
                n = (2*n)/3;
                cnt++;
            }
            else if(n%2 == 0)
            {
                n /= 2;
                cnt++;
            }
            else
                break;
        }
        if(n != 1)
            cout<<temp<<endl;
        else
            cout<<cnt<<endl;
    }
    return (0);
}
