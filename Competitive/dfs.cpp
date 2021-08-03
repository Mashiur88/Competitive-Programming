#include<bits/stdc++.h>
#define LIM 100005
typedef long long ll;
using namespace std;
vector<ll>x[LIM];
int Vis[LIM],com[LIM],pre[LIM];

void dfs(int u,int c)
{
    cout<<"IN "<<u<<endl;
    getchar();
     Vis[u]=1; com[u]=c;
    // int prev=x[u][0],cnt=0;
     for(int i=0;i<x[u].size();i++)
     {
     int v=x[u][i];
     if(pre[u]==v){}
     else if(!Vis[v])
     {
         pre[v]=u;
         dfs(v,c);
     }
     else
     {
         cout<<"cycle ase"<<endl;
     }
     }
     cout<<"OUT "<<u<<endl;
    getchar();
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,u,v;
        cin>>n>>m;
        for(int i=0;i<n;i++) x[i].clear();
        //memset(x,NULL,sizeof x);
        for(int i=0;i<m;i++)
        {
            cin>>u>>v;
            x[u].push_back(v);
            x[v].push_back(u);   ///if undirected
        }
        memset(Vis,0,sizeof Vis);
        int comp=0;
        for(int u=1;u<=n;u++)
        {
            if(!Vis[u])
            {
                comp++;
                dfs(u,comp);

            }
        }
   /*     for(int i=1;i<=n;i++)
        {
            cout<<i<<" : ";
            for(int j=0;j!=x[i].size();j++) cout<<x[i][j]<<" ";
            cout<<endl;
        }    */

    }
}
/*
1
11 13
1 2
2 3
3 4
4 5
5 2
2 7
7 6
6 9
9 10
10 7
10 11
11 8
8 7

*/

