#include<bits/stdc++.h>
using namespace std;
char A[10000006];
int ans=0;
void LongPalindrome(string A)
{
     for(int i=0;i<A.size();i++)
     {  int cnt=0;
         int j=i-1,k=i+1;
         while(A[j]==A[k])
         {
             cnt+=2;
             j--;
             k++;
         }
         ans=max(ans,cnt);

     }
     ans=ans+1;
     for(float i=0.5;i<A.size();i+=1)
     {  int cnt=0;
         int j=i-0.5,k=i+0.5;
         while(A[j]==A[k])
         {
             if(j<0||k>A.size()) break;
             cnt+=2;
             j--;
             k++;
      //
         }
         ans=max(ans,cnt);

     }
  cout<<ans<<endl;
}
int main()
{
    scanf("%s",A);
    string b=A;
    LongPalindrome(b);
}
