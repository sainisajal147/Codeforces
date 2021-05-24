#include <iostream>
#include<map>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
typedef long long int ll;
void solve(ll n)
{
        ll i=0;
        cout<<3*n+4<<endl;
        for(;i<=n;i++)
        {
            cout<<i<<" "<<i<<endl;
            cout<<i<<" "<<i+1<<endl;
            cout<<i+1<<" "<<i<<endl;
        }
        cout<<i<<" "<<i<<endl;
}
int main()
{
    /*ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,ans=0,mi,ma;
        cin>>a>>b>>n;
        mi=min(a,b),ma=max(a,b);
        while(mi<=n and ma<=n)
        {
            ll temp=mi;
            mi=ma;
            ma+=temp;
            ans++;
        }
        cout<<ans<<endl;
    }*/
    /*ll k,n=1;
    cin>>k;
    string s="codeforces";
    ll a[10]={1,1,1,1,1,1,1,1,1,1},x=1,i=0;
    while(x<k)
    {
        x=x/a[i];
        a[i]++;
        x=x*a[i];
        i++;
        if(i==10)
            i=0;
    }
    for(int i=0;i<10;i++)
    {
        cout<<string(a[i],s[i]);
    }
    cout<<endl;*/
    ll n;
    cin>>n;
    solve(n);
    return 0;
}
