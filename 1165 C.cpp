#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dd;
#define mx 1000

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;

    //vector<char> str1;
    //vector<char> str2;

    string str1,str2;
    cin>>str1;
    for(int i=0; i<n ;i++)
    {
        int k = str2.size();
        if(str1[i] != str2[k-1] || k%2 == 0)
        {
            str2.push_back(str1[i]);
            //cout<<i<<" ";
            //cout<<k<<" ";
        }
    }
    //cout<<endl;
    int temp = str2.size();

    if(temp%2 != 0)
        str2.erase(str2.end()-1);

    cout<<str1.length()-str2.length()<<endl<<str2;

    return (0);
}
