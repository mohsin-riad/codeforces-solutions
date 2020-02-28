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
const int N = 1e5;

int main()
{
    IOS
    //freopen("input.txt", "r", stdin);

    int t;
    cin>>t;
    while(t--)
    {
        int cnt = 0;
        vector<int> vec(3);
        for(int i=0; i<3 ;i++)
        {
            cin>>vec[i];
            if(vec[i] != 0)
            {
                vec[i]--;
                cnt++;
            }
        }
        sort(vec.begin(),vec.end());
        if(vec[1] !=0 && vec[2] !=0) { vec[1]--, vec[2]--, cnt++; }
        if(vec[0] !=0 && vec[2] !=0) { vec[0]--, vec[2]--, cnt++; }
        if(vec[0] !=0 && vec[1] !=0) { vec[0]--, vec[1]--, cnt++; }
        if(vec[0] !=0 && vec[1] !=0 && vec[2] !=0) { vec[0]--, vec[1]--,vec[2]--, cnt++; }

        cout<<cnt<<endl;
    }
    return (0);
}










