#include<bits/stdc++.h>
using namespace std;

#define mx 1000
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef double dd;

int isprime(int a)
{
    if(a<=1) return 0;
    //int n = sqrt(1+a);
    for(int i=2; i*i <=a ;i++)
    {
        if(a%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    IOS
    int n, m;
    cin>>n>>m;
    int a = pow(10,n);
    int b = pow(10,m);

    vector<int> v;

    while(a<=b)
    {
        int temp = isprime(a);

        if(temp==1) v.push_back(a);
        a++;
    }

    int x = v.size()-1;
    cout<<v[0]<<" "<<v[x]<<"\n";
    return (0);
}

