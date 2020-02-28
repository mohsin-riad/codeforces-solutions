/**
* Git : Mohsin_Riad
* CF : Neko Finds Grapes//1152
**/

#include<bits/stdc++.h>
using namespace std;
#define mx 100000
#define ex "\n"
typedef long long ll;
typedef double dd;
const dd PI = 3.142;

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll n, m, a[mx], b[mx];
    cin>>n>>m;
    int temp=0;

    for(int i=0; i<n ;i++)
         cin>>a[i];
    for(int j=0; j<m ;j++)
        cin>>b[j];

    for(int i=0; i<n ;i++)
    {
        for(int j=i; j<m ;j++)
        {
            if((a[i]+b[j])%2 != 0)
            {
                if (j != m+1)
                    for (int x = j - 1; x < m - 1; x++)
                    {
                        b[x] = b[x+1];
                        m--;
                    }
                if (i != n+1)
                    for (int y = i - 1; y < n - 1; y++)
                    {
                        a[y] = a[y+1];
                        n--;
                    }
                temp++;

            }
        }
    }
    cout<<temp<<"\n";
    return (0);
}
