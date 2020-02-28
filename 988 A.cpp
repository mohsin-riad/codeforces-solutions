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

    ll n, k;
    cin>>n>>k;

    ll arr[n+5];
    vector<int> vec;
    vector<int> temp;

    for(int i=0; i<n ;i++)
    {
        cin>>arr[i];
        vec.push_back(arr[i]);
    }
    ll Max=0;
    for(int i=0; i<n ;i++)
    {
        int cnt = count(vec.begin(), vec.end(), vec[i]);
        if(vec[i] != -1)
            for(int j=i+1; j<n ;j++)
                if(vec[i] == vec[j])
                    vec.at(j) = -1;

        if(Max < cnt) Max = cnt;
    }

    if((n-Max+1) >= k)
    {
        for(int j=0; j<n ;j++)
        {
            if(temp.size() == k)
                break;
            else if(vec[j] != -1)
                temp.push_back(j+1);

        }
        int x = temp.size();
        if(k>x)
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";
            for(int i=0; i<temp.size() ;i++)
                cout<<temp[i]<<" ";
        }
    }
    else
        cout<<"NO"<<"\n";
    return (0);
}

