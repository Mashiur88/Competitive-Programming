#include<bits/stdc++.h>
using namespace std;
#define n 100
bool mark[n];
vector<int>x;
void sieve()
{
    for(int i=4;i<n;i+=2) mark[i]=1;
    int s=sqrt(n);
    for(int i=3;i<=s;i+=2)
    {
        if(mark[i]!=true)
        {
            for(int j=i+i;j<n;j+=i)
            {
                mark[j]=1;
            }
        }
    }
    int cnt=0;
    for(int i=2;i<n;i++)
    {
        if(!mark[i]) {x.push_back(i); cnt++; }
    }
    cout<<cnt<<endl;

}
void primefactorization(int y)
{
     for(int i=0;i<x.size()&&x[i]*x[i]<=y;i++)
     {
         int p=x[i];
         if(y%p==0)
         {
             int cont=0;
             while(y%p==0)
             {
                 cont++;
                 y/=p;
             }
             cout<<p<<" "<<cont<<endl;
         }
     }
     if(y>1) cout<<y<<" "<<1<<endl;

}
int main()
{
    sieve();
    primefactorization(7899876);
}
