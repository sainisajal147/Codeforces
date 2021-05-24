#include <iostream>

using namespace std;
typedef long long ll;
ll num(int h)
{
    return h*(h+1)+(h*(h-1))/2;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x=0,ans=0;
        while(n>1)
        {
            x=0;
            while(num(x)<=n)
            {
                x++;
            }
            n=n-num(x-1);
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
