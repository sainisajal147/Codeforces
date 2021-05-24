#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

typedef long long int ll;

bool s(vector<ll> ans, ll x)
{
    for(ll i=0;i<ans.size();i++)
    {
        if(ans[i]==x)
            return true;
    }
    return false;
}
bool comp(ll a,ll b)
{
    return a<b;
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
        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }
        ll pos=n-1;
        while(pos>0 and v[pos-1]>=v[pos]){
                pos--;
        }
        while(pos>0 and v[pos-1]<=v[pos]){
                pos--;
        }
        cout << pos<< endl;
    }
    return 0;
}
