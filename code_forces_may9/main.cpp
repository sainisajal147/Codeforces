#include <iostream>
#include<string>
#include<limits>
#include<vector>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
   cin>>t;
   // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(t--)
    {
        ll n,k,i,ans=0,j;
       cin>>n>>k;
       j=k/(n-1);
       ans=j*n;
       if(k%(n-1))
           ans+=k%(n-1);
       else
        ans--;
       cout<<ans<<endl;
    }
    return 0;
}
