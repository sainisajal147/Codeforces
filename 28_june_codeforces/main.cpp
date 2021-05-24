#include <iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string>
#include<math.h>
#include<stack>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        vector<bool> mar(n,0);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(ll i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
