#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set <int> z;
    int x,n;
    scanf("%d",&n);
    scanf("%d",&x);
    int a[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       z.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int lookup=x-(a[j]+a[i]);
            if(z.find(lookup)!=z.end())
            {
                printf("%d %d %d",a[i],a[j],lookup);
                return 0;
            }
        }
    }
}
