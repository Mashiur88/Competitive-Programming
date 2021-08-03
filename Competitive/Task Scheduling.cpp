#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
      int busy=0,st[n],et[n],cnt=0;
      multimap<int,int>time;
      for(int i=0;i<n;i++)
      {
          scanf("%d",&st[i]);
          scanf("%d",&et[i]);
          time.insert({et[i],st[i]});
      }
      for(map<int,int>::iterator it=time.begin();it!=time.end();it++)
      {
          if(it->second>=busy)
          {
              busy=it->first;
              cnt++;
          }
      }
      cout<<cnt<<endl;


     /* for(map<int,int>::iterator it=time.begin();it!=time.end();it++)
      {
          cout<<it->first<<" "<<it->second<<endl;
      }
    */

}
