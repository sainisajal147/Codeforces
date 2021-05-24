#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<bits/stdc++.h>
#include<set>
#include<math.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k=1,ans=0;
        cin>>n;
        while(k<=n)
        {
            ans+=(n/k);
            k*=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
