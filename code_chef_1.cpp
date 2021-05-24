#include <iostream>
# include<queue>
using namespace std;
struct a
{
    int v;
    int l;
};
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
            a a[n];//={{3,7},{10,1},{6,4},{5,7}};
            for(int i=0;i<n;i++)
            {
                cin>>a[i].v;
                cin>>a[i].l;
            }
            for(int i=0;i<n;i++)
            {
                if(a[i].l>=4)
                {
                    p=p+sq(a[i].v);
                    a[i].l=a[i].l-4;
                }
            }
            priority_queue<int > q;
            for(int i=0;i<n;i++)
            {
                if(a[i].l>1)
                {
                  q.push(a[i].v);
                  a[i].l=a[i].l-2;
                }
            }
            int x,y;
            while(!q.empty() && q.size()>1)
            {
                x=q.top();
                q.pop();
                y=q.top();
                q.pop();
                p=p+re(x,y);
            }
            cout<<p<<"\n";
    }
    return 0;
}
