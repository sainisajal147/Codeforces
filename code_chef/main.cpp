#include <iostream>
# include<queue>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
struct a
{
    int v;
    int l;
};
bool comparea(a x,a y)
{
    return (x.v<y.v);
}
int sq(int n)
{
    return 4*n;
}
int re(int a, int b)
{
    return 2*(a+b);
}
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
            int n,p=0;
            cin>>n;
            a q[n];
         for(int i=0;i<n;i++)
            {
                cin>>q[i].v;
                cin>>q[i].l;
            }
            sort(q , q + n, comparea);
            n=n-1;
                while(n>=0)
                 {
                        if(q[n].l>=4)
                        {
                            int f=(q[n].l)/4;
                            p=p+f*sq(q[n].v);
                            q[n].l=q[n].l-f*4;
                        }
                        if(q[n].l>1 && (n-1)>=0)
                        {
                        q[n].l=q[n].l-2;
                        q[n-1].l=q[n-1].l-2;
                        p=p+re(q[n].v,q[n-1].v);
                        }
                        n--;
                }
            cout<<p<<"\n";
    }
    return 0;
}
