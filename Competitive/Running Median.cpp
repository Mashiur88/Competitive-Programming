#include<bits/stdc++.h>
using namespace std;
int n;
double ans=0.0;
multiset<int>leftmax,rightmin;
int main()
{
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if(leftmax.size() == rightmin.size())
        {
            rightmin.insert(A[i]);
           // cout<<rightmin.size()<<"op"<<endl;

        if(leftmax.size()>0)
        {
                  multiset<int>::iterator it = leftmax.end();
        it--;
        int l= *it; leftmax.erase(it);
        int r= *rightmin.begin(); rightmin.erase(rightmin.begin());
        if(l>r)
            swap(l,r);
        leftmax.insert(l);
        rightmin.insert(r);
        }
           ans = *rightmin.begin();
           cout<<"ans:"<<ans<<endl;
        }
        else if(rightmin.size()-leftmax.size()==1)
        {
            leftmax.insert(A[i]);

        if(leftmax.size()>0)
        {
                  multiset<int>::iterator it = leftmax.end();
        it--;
        int l= *it; leftmax.erase(it);
        int r= *rightmin.begin(); rightmin.erase(rightmin.begin());
        if(l>r)
            swap(l,r);
        leftmax.insert(l);
        rightmin.insert(r);
        }
        multiset<int>::iterator it = leftmax.end();
        it--;
        ans=(*it+*rightmin.begin())/2.0;
        cout<<ans<<endl;
        }

    }
    /*for(multiset<int>::iterator x=rightmin.begin();x!=rightmin.end();x++)
    {
        cout<<*x<<endl;
    }
    for(multiset<int>::iterator y=leftmax.begin();y!=leftmax.end();y++)
    {
        cout<<*y<<endl;
    }
*/

}
