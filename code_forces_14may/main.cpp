#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll ans=0;
        if(n==1)
        cout<<"0"<<endl;
        else
        {
            if(n==2)
            cout<<m<<endl;
            else
            cout<<2*m<<endl;
        }
    }
    return 0;
}
