#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n],ans=INT_MIN,mn=0,cur=0;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        cur+=A[i];
        ans=max(ans,cur-mn);
        mn=min(cur,mn);
        cout<<cur<<" "<<mn<<endl;
    }
    cout<<ans<<endl;
}
