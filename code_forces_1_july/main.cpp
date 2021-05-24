#include <iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll a,ll b,ll n,ll m)
{
    if(m>min(a,b))
    {
        cout<<"NO\n";
        return;
    }
    if(a+b<n+m)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,m;
        cin>>a>>b>>n>>m;
        solve(a,b,n,m);
    }
    return 0;
}
