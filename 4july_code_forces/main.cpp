#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
typedef long long int ll;
ll x(vector<ll> a)
{
    ll x=0;
    for(ll i=0;i<a.size()-1;i++)
    {
        if(a[i+1]-a[i]>=0)
            x++;
    }
    return x;
}
ll y(vector<ll> a)
{
    ll y=0;
    for(ll i=0;i<a.size()-1;i++)
    {
        if(a[i+1]-a[i]<=0)
            y++;
    }
    return y;
}
void disp(vector<ll> a)
{
    for(ll i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void solve(vector<ll> a,ll n)
{
    ll X=(n-1)/2,Y=(n-1)/2;
    if(x(a)>=X and y(a)>=Y)
    {
        disp(a);
        return;
    }
    ll i;
    for(i=0;i<=n/2-1;i++)
    {
        if(a[i+1]-a[i]<0)
        {
            a[i]=-a[i];
        }
    }
    for(;i<n-1;i++)
    {
        if(a[i+1]-a[i]>0)
        {
            a[i+1]=-a[i+1];
        }
    }
    disp(a);
    cout<<x(a)<<" "<<y(a)<<endl;
}
/*void good(vector<vector<ll>> a,ll n,ll m)
{
    for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                a[i][j]+=1;
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(i==0 and j==0)
                {
                    if(a[i][j]>2)
                    {
                        cout<<"NO\n";
                        return;
                    }
                    else
                    {
                        a[i][j]=2;
                    }
                }
                else if(i==0 and j==m-1)
                {
                    if(a[i][j]>2)
                    {
                        cout<<"NO\n";
                        return;
                    }
                    else
                    {
                        a[i][j]=2;
                    }
                }
                else if(i==n-1 and j==0)
                {
                    if(a[i][j]>2)
                    {
                        cout<<"NO\n";
                        return;
                    }
                    else
                    {
                        a[i][j]=2;
                    }
                }
                else if(i==n-1 and j==m-1)
                {
                    if(a[i][j]>2)
                    {
                        cout<<"NO\n";
                        return;
                    }
                    else
                    {
                        a[i][j]=2;
                    }
                }
                else if(i==0 or i==n-1)
                {
                   if(a[i][j]>3)
                    {
                        cout<<"NO\n";
                        return;
                    }
                    else
                    {
                        a[i][j]=3;
                    }
                }
                else if(j==0 or j==m-1)
                {
                    if(a[i][j]>3)
                    {
                        cout<<"NO\n";
                        return;
                    }
                    else
                    {
                        a[i][j]=3;
                    }
                }
                else
                {
                    if(a[i][j]>4)
                    {
                        cout<<"NO\n";
                        return;
                    }
                    else
                    {
                        a[i][j]=4;
                    }
                }
            }
        }
    cout<<"YeS\n";
    for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
}
*/
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2)
            {
                if(a[i]>0)
                    a[i]=-a[i];
            }
            else
            {
                if(a[i]<0)
                    a[i]=-a[i];
            }
        }
        disp(a);
        //cout<<x(a)<<" "<<y(a)<<endl;
    }
    return 0;
}
