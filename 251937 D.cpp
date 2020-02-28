#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mx 1000
#define pb push_back
#define pob pop_back
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int n = 1e5;

bool match()
{
    for(i=0;i<m-n+1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str1[i+j] != str2[j])
            break;
        }
        if(j == n)
        {
            printf("\n\n Pattern found at %d. ",i);
        }
    }


}

int main()
{
    IOS
    //char temp[n+5];
    //cin>>temp;
    //char temp[] = "abcdef";
    char txt1 [] = "xyzabcxyz";
    char txt2 [] = "abcxyz";
    char temp [] = "xyzabc";

    ll M = strlen(temp)-1;
    ll N = strlen(txt1)-1;
    ll O = strlen(txt2)-1;

    int X = strlen(temp);
    temp[X] = '\0';
    X--;

    char sfx[X+1][X+1];
    int cnt = X;
    bool morteen = false;
    vector<string> v;

    for(int i=0; i<=X ;i++)
    {
        bool verify1 = false;
        bool verify2 = false;
        int loc[mx], q=0, p=1, len=0,tmp = X, j;

        for(j=0; j<=X ;j++)
        {
            sfx[i][j] = temp[j];

            if(temp[j] == '\0')
            {
                sfx[i][j] = '\0';
                break;
            }
        }
        //cout<<sfx[i]<<"\n";
        //cout<<"\n";

        loc[0] = 0;
        while(p < cnt)
        {
            cout<<sfx[i][p]<<" "<<sfx[i][len]<<endl;
            if(sfx[i][p] == sfx[i][len])
            {
                len++;
                loc[p] = len;
                p++;
            }
            else
            {
                if( len != 0 )
                    len = loc[len-1];
                else
                {
                    loc[p] = 0;
                    p++;
                }
            }
        }
        cout<<i<<"--"<<p<<endl;
        int a = p;
        int b = len;
        while(p < N)
        {
            cout<<sfx[i][q]<<"-"<<txt1[p]<<endl;
            if(sfx[i][q] == txt1[p])
            {
                q++;
                p++;
            }
            if (q == M)
            {
                verify1 = true;
                //printf("Found pattern at index %d \n", p-q);
                q = loc[q-1];
                break;
            }
            else if(sfx[i][q] != txt1[p])
            {
                if(q != 0)
                    q = loc[q-1];
                else
                    p = p+1;
            }
        }

        if(verify1 == true)
        {
            p = a, q = 0;
            while(p < O)
            {
                if(sfx[i][q] == txt2[p])
                {
                    q++;
                    p++;
                }
                if (q == M)
                {
                    verify2 = true;
                    //printf("Found pattern at index %d \n", p-q);
                    q = loc[q-1];
                    cout<<sfx[i]<<"\n";
                    break;
                }
                else if(sfx[i][q] != txt2[p])
                {
                    if(q != 0)
                        q = loc[q-1];
                    else
                        p = p+1;
                }
            }


        }
        if(verify1 == true && verify2 == true)
        {
            morteen = true;
            v.pb(sfx[i]);
            break;
        }
        cout<<"\n";
        int k;
        for(k=0; k<=cnt ;k++)
        {
            temp[k] = temp[k+1];
        }
        temp[k] = '\0';
        cnt--;
    }

    if(morteen == true) cout<<v.at(0)<<"\n";
    else cout<<"key not found"<<"\n";

    return (0);

}

/////////////////////////////////////////////////////////

/*
    int M , N, loc[mx], q=0, p=1;

    char txt1[mx], txt2[mx], pat[mx];
    cin>>txt1;
    cin>>txt2;
    cin>>pat;

    char txt [] = "bababaabaaaba";
    char pat [] = "aaba";

    M = strlen(pat)-1;
    N = strlen(txt)-1;

    int len = 0;
    loc[0] = 0;



    while(p < M)
    {
        //cout<<pat[i]<<" "<<pat[len]<<endl;
        if(pat[p] == pat[len])
        {
            len++;
            loc[p] = len;
            p++;
        }
        else
        {
            if( len != 0 )
                len = loc[len-1];
            else
            {
                loc[p] = 0;
                p++;
            }
        }
    }
    cout<<p<<endl;
    while(p < N)
    {
        if(pat[q] == txt[p])
        {
            q++;
            p++;
        }
        if (q == M)
        {
            printf("Found pattern at index %d \n", p-q);
            q = loc[q-1];
        }
        else if(pat[q] != txt[p])
        {
            if(q != 0)
                q = loc[q-1];
            else
                p = p+1;
        }
    }

    return 0;
}
*/


