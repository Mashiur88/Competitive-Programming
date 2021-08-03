#include<bits/stdc++.h>
using namespace std;
char a[10000000];
palindromicAnagram(int cntA[30])
{
int cnt=0;
   for(int i=0;i<30;i++)
   {
    if(cntA[i]%2!=0) cnt++;
   }
   if(cnt>1) printf("not palindromic anagram\n");
   else printf("palindromic anagram\n");
}
int main()
{
    int cntA[30]={0},cntB[30]={0};
    string b,c;
    scanf("%s",a);
    b=a;
    scanf("%s",a);
    c=a;
    for(int i=0;i<b.size();i++)
    {
        cntA[b[i]-'a']++;
    }
    for(int i=0;i<c.size();i++)
    {
        cntB[c[i]-'a']++;
    }
    palindromicAnagram(cntA);
    bool flag=true;
    for(int i=0;i<30;i++)
    {
        if(cntA[i]!=cntB[i]) {flag=false;
            break; }
    }
    if(flag==true)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");
  //  cout<<b<<endl;
  //  cout<<c<<endl;
}
