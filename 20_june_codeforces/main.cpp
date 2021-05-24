#include <iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
#include<map>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int ll;
#define A "FastestFinger"
#define B "Ashishgup"
bool b(ll n)
{
    for(int i=2;pow(2,i)<=n;i++)
    {
        if(pow(2,i)==n)
        {
            return true;
        }
    }
    return false;
}
bool isprime(ll n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
void solve(ll n)
{
    if(n==1)
    {
        cout<<A<<endl;
        return;
    }
    else if(n%2  or n==2)
    {
        cout<<B<<endl;
        return;
    }
    else if(b(n))
    {
        cout<<A<<endl;
        return;
    }
    else if(n%4==0)
    {
        cout<<B<<endl;
        return;
    }
    else
    {
        if(isprime(n/2))
        {
            cout<<A<<endl;
            return;
        }
        else
        {
            cout<<B<<endl;
            return;
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        solve(n);
    }
    return 0;
}
