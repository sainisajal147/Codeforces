#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
typedef long long int ll;
struct node{
ll a;
ll b;
} ;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,os=0,one=0;
        cin>>n;
        vector<node> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i].a;
        }
        for(ll i=0;i<n;i++)
        {
            cin>>v[i].b;
            if(v[i].b==0)
                os++;
            else
                one++;
        }
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i].a>v[i+1].a)
            {
                flag++;
                break;
            }
        }
        if((os>=1 and one>=1)or flag==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
