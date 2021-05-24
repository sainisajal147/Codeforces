#include <iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
void solve(vector<ll> v)
{
        ll ans=1,c=1;
        for(ll i=0;i<v.size();i++)
        {
            ans++;
            if(ans-1>=v[i])
            {
                c=ans;
            }
        }
        cout<<c<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        solve(v);
    }
    return 0;
}
