#include <iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
#include<string>
#include<limits>
#include<algorithm>
using namespace std;
typedef long long int ll;
bool comp(ll a, ll b)
{
    return a>b;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,ans=0;
        cin>>n>>k;
        vector<ll> integer(n);
        vector<ll> friends(k);
        for(ll i=0;i<n;i++)
        {
            cin>>integer[i];
        }
        for(ll i=0;i<k;i++)
        {
            cin>>friends[i];
        }
        sort(integer.begin(),integer.end(),comp);

        sort(friends.begin(),friends.end());

        vector<ll> a[k];
        /*for(ll i=0,j=0;i<n;j++)
        {
            if(a[j%k].size()<friends[j%k])
            {
                a[j%k].push_back(integer[i]);
                i++;
            }
        }*/
        for(ll i=0;i<k;i++)
        {
            a[i].push_back(integer[i]);
        }
        ll j=k;
        for(ll i=0;i<k;i++)
        {
            while(a[i].size()<friends[i])
            {
                a[i].push_back(integer[j]);
                j++;
            }
        }
        for(ll i=0;i<k;i++)
        {
            ans+=*min_element(a[i].begin(), a[i].end())+*max_element(a[i].begin(), a[i].end());
        }
        cout<<ans<<endl;
    }
    return 0;
}
