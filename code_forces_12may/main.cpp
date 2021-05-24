#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

struct node
{
    ll i;
    ll d;
};
bool comp(node a, node b)
{
    return a.d<b.d;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<node> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].d;
            a[i].i=i+1;
        }
        sort(a.begin(),a.end(),comp);
        ll ans=0,m=0;
        for(ll i=0;i<a.size();i++)
        {
            if(a[i].i!=1)
            {
            ans=0;
            for(ll j=i+1;j<a.size();j++)
            {
                if((a[j].i)%(a[i].i)==0)
                {
                    ans++;
                }
            }
            if(ans>m)
                m=ans;
            }
        }
        if(a.size()==1)
            cout<<"1"<<endl;
        else if(a[0].i==1)
            cout<<m+2<<endl;
        else
        cout<<m+1<<endl;
    }
    return 0;
}
