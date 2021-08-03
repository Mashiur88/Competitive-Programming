#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set <int> z;
    int x,n;
    scanf("%d",&n);
    scanf("%d",&x);
    int a[n];
  /*  for(int i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
       z.insert(a[i]);
    }
    unordered_set<int>::iterator it;
    for(it=z.begin();it!=z.end();it++)
    {
         int lookup=x-*it;
         unordered_set<int>::iterator it1=z.find(lookup);
         if(it1!=z.end())
         {
             cout<<*it1<<" "<<*it<<endl;
             break;
         }
    } */
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       z.insert(a[i]);
        int lookup=x-a[i];
        unordered_set<int>::iterator it=z.find(lookup);
         if(it!=z.end())
         {
             cout<<lookup<<" "<<a[i]<<endl;
             break;
         }

    }
}
