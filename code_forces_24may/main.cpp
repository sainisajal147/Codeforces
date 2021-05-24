#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
typedef long long int ll;
void solve(ll n,ll k)
{
    if(n<=k)
        {
            cout<<"1\n";
            return;
        }
    for(ll i=2;i<=k && i<=pow(n,0.5);i++)
    {
     if(n%i==0)
     {
         cout<<i<<endl;
         return;
     }
    }
    cout<<n<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        solve(n,k);
    }
    return 0;
}
