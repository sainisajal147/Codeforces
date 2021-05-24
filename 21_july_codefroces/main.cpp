#include <iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long int ll;
void solve(vector<ll> a,ll n)
{
        ll ans=0;
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]==1)
                ans++;
            else
                break;
        }
        if(ans%2)
            cout<<"Second\n";
        else
            cout<<"First\n";
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        solve(a,n);
    }
    return 0;
}
