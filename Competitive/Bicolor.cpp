#include<bits/stdc++.h>
#define LIM 100005
typedef long long ll;
using namespace std;
vector<ll>x[LIM];
int Vis[LIM],pre[LIM],color[LIM];

void dfs(int u,int c)
{
  //  cout<<"IN "<<u<<endl;
   // getchar();
     Vis[u]=1; color[u]=c;
     for(int i=0;i<x[u].size();i++)
     {
     int v=x[u][i];
  //   cout<<"try "<<v<<endl;
     if(!Vis[v])
     {
         pre[v]=u;
         dfs(v,!c);
     }
     else if(Vis[v]==1)
     {
         if(color[v]==color[u])
         {
             cout<<"Bi color not possible"<<endl;
         }
     }

     }
  //   cout<<"OUT "<<u<<endl;
  //  getchar();
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
        for(int u=1;u<=n;u++)
        {
            int color=0;
            if(!Vis[u])
            {
                dfs(u,color);
            }
        }
        if(u==n)
        {
        cout<<"Bi color possible"<<endl;
        }

    }
}
/*
1
6 8
1 2
2 3
3 4
3 5
3 6
4 5
5 6
6 1

*/

