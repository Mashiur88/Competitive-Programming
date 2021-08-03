#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)return a;
    gcd(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int x=(a*b)/__gcd(a,b);
    cout<<__gcd(a,b)<<endl;
    cout<<x<<endl;
   int y=gcd(a,b);
   cout<<y<<endl;
}
