#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define max 1000
typedef long long ll;
typedef double dd;

int main()
{
    IOS

    ll n, mx=0;
    cin>>n;

    char str[n+5], tmp[4];
    cin>>str;

    vector<string> temp;
    vector<string> Max;

    for(int i=0; i<n-1 ;i++)
    {
        for(int j=0, k=i; j<=1 ;j++, k++)
        {
            tmp[j] = str[k];
        }
        tmp[2] = '\0';
        temp.push_back(tmp);
    }
    for(int i=0; i<n-1 ;i++)
    {
        //cout<<temp[i]<<" ";

        int cnt = count(temp.begin(), temp.end(), temp[i]);
        if(mx < cnt)
        {
            mx = cnt;
            Max.push_back(temp[i]);
        }
        //cout<<cnt<<endl;
    }
    Max.erase(Max.begin(),Max.end()-1 );
    for(int i=0; i<Max.size() ;i++)
        cout<<Max[i]<<endl;
    return (0);
}

