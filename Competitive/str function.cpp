#include<bits/stdc++.h>
using namespace std;
string stcpy(char x[],char y[]);
int stlen(char x[]);
bool stcmp(char x[],char y[])
{
int flag=0;
    for(int i=0;x[i]!='\0';i++)
    {
     if(x[i]!=y[i])
     {
         flag=1;
     }
    }
     if(flag==1) {return false;}
     else {return true;}
}
int stlen(char x[])
{
    int cnt=0;
    for(int i=0;x[i]!='\0';i++)
    {
        cnt++;
    }
    return cnt;
}
string stcat(char x[],char y[])
{
     int n=stlen(x);
     int m=stlen(y);
     for(int i=0,j=n;y[i]<m;i++,j++)
     {
         x[j]=y[i];
     }
     return x;
}

int main()
{
    int n,i=0;
    scanf("%d",&n);
    char x[100],y[100];
    string z;
    while(i<n)
    {
  //  cin>>z;
   scanf("%s",x);
   scanf("%s",y);

  //cout<<stcpy(x,y)<<endl;

 //     z=stcpy(x,y);
  // printf("%s\n",stcpy(x,y));
   printf("%d\n",stlen(x));
     printf("%d\n",stcmp(x,y));
    cout<<stcat(x,y)<<endl;
//     printf("%s",stcat(&x,&y));
  // cout<<z<<" ";
  //  printf("%s ",x);
  //  printf("%s ",y);
  i++;
    }
}
string stcpy(char x[],char y[])
{
    for(int i=0;y[i]!='\0';i++)
    {
        x[i]=y[i];
    }
    return x;
}
