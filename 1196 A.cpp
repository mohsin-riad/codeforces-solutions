#include<bits/stdc++.h>
using namespace std;

#define mx 1000
typedef unsigned long long llu;
typedef double dd;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    llu qry, a, b, c;
    cin>>qry;
    while(qry--)
    {
        cin>>a>>b>>c;
        cout<<(a+b+c)/2<<"\n";
    }
    return (0);
}
