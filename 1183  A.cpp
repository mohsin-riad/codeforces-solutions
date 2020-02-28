#include<bits/stdc++.h>

using namespace std;
#define mx 1000
typedef long long ll;
typedef double dd;

int main()
{
    ll a, i=0, arr[10], n, sum=0;
    cin>>a;
    ll temp = a;
    while(a > 0)
    {
        arr[i] = a%10;
        sum += a%10;
        a /= 10;
        i++;
    }

    while(sum%4 != 0)
    {
        temp++;
        i=0;
        a=temp;
        sum = 0;
        while(a > 0)
        {
            arr[i] = a%10;
            sum += a%10;
            a /= 10;
            i++;
        }
    }
    cout<<temp<<endl;
    return (0);
}
