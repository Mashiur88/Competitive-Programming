#include<bits/stdc++.h>
using namespace std;
/*int maxelement(int ans[],int n)
{
    int L=ans[0];
    for(int i=1;i<n;i++)
    {
        if(L<ans[i])
            L=ans[i];
    }
    return L;
}
int main()
{
    int n;
    scanf("%d",&n);
      int busy=0,st[n],et[n];
     // multimap<int,int>time;
      for(int i=0;i<n;i++)
      {
          scanf("%d",&st[i]);
          scanf("%d",&et[i]);
       //   time.insert({et[i],st[i]});
      }
      int x=et[n-1]+1;
      int ans[x]={};
      for(int i=0;i<n;i++)
      {
          for(int j=st[i];j<=et[i];j++)                // N^2 Complexity
          {
              ans[j]++;
          }
      }
      for(int i=0;i<x;i++)
      {
          cout<<ans[i]<<endl;
      }
      cout<<maxelement(ans,x)<<endl;
}    */

/*
7
2 3
3 4
2 5
2 4
4 5
4 6
6 7
*/
int main()
{
    int n;
    scanf("%d",&n);
      int st[n],et[n];
     // multimap<int,int>time;
      for(int i=0;i<n;i++)
      {
          scanf("%d",&st[i]);
          scanf("%d",&et[i]);
       //   time.insert({et[i],st[i]});
      }
      int ans[100]={},cnt=0;
      for(int i=0;i<n;i++)
      {
                              // LogN Complexity
           ans[st[i]]++;
           ans[et[i]+1]--;

      }
      for(int i=0;i<100;i++)
      {
          ans[i]+=ans[i-1];
          cnt=max(ans[i],cnt);
      }
      cout<<cnt<<endl;
}
