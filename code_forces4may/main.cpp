#include <iostream>
#include<vector>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    vector<ll > a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll pos=0,bal=0,cnt1=0,cnt2=0;
    for(ll l=0;l<n;l++)
    {
        if(bal%2==0)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        if(a[l]<0)
        {
            bal++;
        }
        if(bal%2==0)
        {
            pos+=cnt1;
        }
        else
        {
            pos+=cnt2;
        }
    }
    cout<<n*(n+1)/2-pos<<" "<<pos<<endl;
    return 0;
}
