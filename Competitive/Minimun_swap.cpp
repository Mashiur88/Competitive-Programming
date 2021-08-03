#include<bits/stdc++.h>
using namespace std;
int n,ans=0;
int main()
{
    scanf("%d",&n);
    int A[n],Pos[n]={0};
    for(int i=0;i<n;i++)
    {
    scanf("%d",&A[i]);
    Pos[ A[i] ]=i;
    }
    for(int i=0;i<n;i++)
    {
        if(A[i] == i) continue;
        int p= Pos[i];
        A[p]=A[i];
        A[i]=i;
        Pos[ A[i] ]=i;
        Pos[ A[p] ]=p;

        ans++;
    }
     cout<<ans<<endl;

    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++)
    {
        printf("%d ",Pos[i]);
    }
    return 0;
}


/*
5
3 2 0 4 1
*/
