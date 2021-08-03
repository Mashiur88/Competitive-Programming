#include<bits/stdc++.h>
using namespace std;
char a[10000000];
int cnt[26][10000]={0};
void PalindromicAnagram(int d,int e)
{
    int cntA[26]={0};
    int ans=0;
    for(int i=0;i<26;i++)
    {
          cntA[i]=cnt[i][e]-cnt[i][d-1];
          if(cntA[i]%2!=0) ans++;
    }
    if(ans>1){printf("not Palindromic Anagram\n");}
    else printf("Palindromic Anagram\n");
}
int main()
{
   string b;
   scanf("%s",a);
   b=a;
   int n=b.size();
   for(int i=0;i<n;i++)
   {
           cnt[b[i]-'a'][i]++;
   }
   for(int j=0;j<n;j++)
   {
       for(int i=0;i<26;i++)
       {
           cnt[i][j]+=cnt[i][j-1];
       }
   }
  /* for(int i=0;i<26;i++)
   {
       for(int j=0;j<n;j++)
       {
           cout<<cnt[i][j]<<" ";
       }
      cout<<endl;
   }   */


   int c,d,e;
   scanf("%d",&c);
   for(int i=0;i<c;i++)
   {
       scanf("%d",&d);
       scanf("%d",&e);
       PalindromicAnagram(d,e);
   }
}
