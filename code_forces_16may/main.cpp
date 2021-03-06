#include <iostream>
#include<string>
#include<sstream>
#include<math.h>
#include<map>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0,s=0;
        map<ll,ll> m;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            m[x]++;
        }
        map<ll,ll>::iterator p=m.begin();
        while(p!=m.end())
        {
            ll e=p->first;
            s+=p->second;

            if(s>=e)
              {
                 ans+=s/e;
                 m[e]-=ans;
                 s+=m[e]-ans;
              }
            p++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
