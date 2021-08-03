#include<bits/stdc++.h>
using namespace std;
char x[10000006];

bool subsqnc(string a,string b)
{
    int i=0,j=0;
    bool flag=false;
    while(i<a.size()&&j<b.size())
    {
        if(a[i]==b[j]) j++;
        i++;
       if(j==b.size())
       {
           flag=true;
           break;
       }

    }
    if(flag==true) {printf("Yes\n");}
    else {printf("No\n");}

}
bool sbstr(string a,string b)
{
    int i=0;
     bool flag=false;
    while(i<a.size())
    {
        int j=i,k=0;
        while(k<b.size())
        {
        if(a[j]==b[k])
        {
         j++;
         k++;
         if(k==b.size())
        {
            flag=true;
            return flag;
        }
        }
        else
        {
          break;
        }
        }
        i++;

    }
    return flag;
}
int main()
{
    string a,b;
    scanf("%s",x);
    a=x;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",x);
        b=x;
        subsqnc(a,b);
        if(sbstr(a,b))
        {
            printf("Yes\n");
        }
        else printf("No\n");
    }
}
