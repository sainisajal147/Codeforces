#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
using namespace std;
typedef long long int ll;
void disp(vector<ll> a)
{
    for(ll i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m=0,till_m=0,x=1;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        till_m=v[0];
        for(ll i=1;i<n;i++)
        {
            if(v[i]>till_m)
                till_m=v[i];
            else if(v[i]<till_m and till_m-v[i]>m)
                m=till_m-v[i];
        }
        while(m>0)
        {
            m-=pow(2,x-1);
            x++;
        }
        cout<<x-1<<endl;
    }
    return 0;
}
