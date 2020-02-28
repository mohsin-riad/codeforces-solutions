/**
* Git >> Mohsin_Riad
**/
#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000
typedef long long ll;
typedef double dd;

int main()
{
    IOS
    ll n;
    cin>>n;

    ll a[n+5];
    ///vector<int> v;

    for(int i=0; i<n ;i++)
    {
        cin>>a[i];
        ///v.push_back(a[i]);
    }

    int max=0, temp=0;
    for(int i=0, j=0; i<n ;i++)
    {
        if(a[i] == 1)
        {
            temp++;
            if(i == n-1)
                if(a[j] == a[i])
                {
                    temp++;
                    while(a[j] == a[j+1])
                    {
                        temp++;
                        j++;
                    }
                }
            else
                if(a[i] == a[i+1])
                    temp++;
            if(max < temp)
                max = temp;
        }
        else
        {
            if(max < temp)
                max = temp;
            temp=0;
        }
        //cout<<temp<<"\t";
    }
    cout<<max<<endl;

    return (0);
}

