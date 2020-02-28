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
#define MAX 100007
typedef pair<int,int> pii;
vector<pii> edge[MAX];
int dist[MAX];

bool comparison(const pair<int,int> &a,const pair<int,int> &b){
    return a.second<b.second;
}

void dijkstra(int start)
{
    priority_queue<pii,vector<pii>,greater<pii> > pq;
    pq.push(make_pair(0,start));

    while(!pq.empty())
    {
        pii x=pq.top();
        pq.pop();
        int u=x.second;
        int c=x.first;

        if(dist[u]<c) continue;

        for(int i=0;i<edge[u].size();i++)
        {
            int v=edge[u][i].first;
            int w=edge[u][i].second;
            if(dist[u]+w<dist[v])
            {
                //cout<<c<<"_ "<<endl;
                dist[v]=dist[u]+w;
                pq.push(make_pair(dist[v],v));
            }
        }
    }
}

int main()
{
    IOS
    freopen("input.txt", "r", stdin);
    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edge[u].push_back(make_pair(v,w));

    }
    for(int i=1;i<=n;i++)
        dist[i]=(int)1e12;

    int start=1;
    ///cin>>start;
    dist[start]=0;
    dijkstra(start);

    //vector<pii> vec;
    //for(int i=0; i<=n;	i++)
        //vec.push_back(make_pair(i, dist[i]));

    //sort(vec.begin(), vec.end(),comparison);

    if(dist[n] != (int)1e12)
    {
        //int sz = vec.size()-1;
        cout<<dist[n]<<endl;
    }
    else cout<<"-1"<<endl;

    return 0;
}
