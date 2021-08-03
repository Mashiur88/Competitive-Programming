#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>x;
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",a[i]);
        x.insert({a[i],0});
    }
    int ans=0,diff=INT_MAX;
    for(int i=0;i<n;i++)
    {

        int look=k-a[i];
        map<int,int>::iterator it=x.lower_bound(look);
        if(it!=x.end())
        {
            int curr=a[i]+it->first;
            int z=abs(curr-k);
            if(z<diff)
            {
                ans=curr;
                diff=z;
            }
        }
        if(it!=x.begin())
        {
            it--;
            int curr=it->first+a[i];
            int z=(curr-k);
            if(z<diff)
            {
                ans=curr;
                diff=z;
            }
        }
        x[a[i]]=1;
    }
    printf("%d\n",ans);

}
