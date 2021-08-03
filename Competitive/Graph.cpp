#include<bits/stdc++.h>
#define LIM 100005
typedef long long ll;
using namespace std;

vector<ll>x[LIM],z[LIM];
int y[10000][10000];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
//        int n,m,u,v,w;
//        cin>>n;
//         memset(y,-1,sizeof y);
//        for(int i=1;i<=n;i++)
//        {
//            cin>>u>>v>>w;
//            y[u][v]=w;
//            y[v][u]=w;
//        }
//         for(int i=1;i<2*n;i++)
//         {
//             for(int j=1;j<2*n;j++)
//             {
//                 cout<<y[i][j]<<" ";
//             }
//             cout<<endl;
//         }

        int n,m,u,v,w;
        cin>>n>>m;
        for(int i=0;i<n;i++) x[i].clear();
        for(int i=0;i<n;i++) z[i].clear();
        //memset(x,NULL,sizeof x);
        for(int i=0;i<m;i++)
        {
            cin>>u>>v>>w;
            x[u].push_back(v); z[u].push_back(w);
          //  x[v].push_back(u); z[v].push_back(w);  ///if undirected
        }
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" : ";
            for(int j=0;j!=x[i].size();j++) cout<<x[i][j]<<" ";
            cout<<endl;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" : ";
            for(int j=0;j!=z[i].size();j++) cout<<z[i][j]<<" ";
            cout<<endl;
        }

    }
}
