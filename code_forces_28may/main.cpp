#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    //ll t;
   // cin>>t;
   // while(t--)
   // {
        ll n=1;
        double pre=1000000,h,c,t,sum=0;
        cin>>h>>c>>t;
        sum=h;
        while(abs(t-(sum*1.0)/n) <pre)
        {
            pre=abs(t-(sum*1.0)/n);
            cout<<pre<<endl;
            n+=1;
            if(n%2==1)
            {
                sum+=h;
            }
            else
            {
                sum+=c;
            }
        }
        cout<<n;
    //}
    return 0;
}
