#include <iostream>
#include<algorithm>
#include<set>
#include<bits/stdc++.h>
#include<deque>
using namespace std;
typedef long long int ll;
ll Sum(vector<ll > a,ll i,ll j)
{
    ll sum=0;
   for(int k=i;k<=j;k++)
    {
        sum+=a[k];
    }
    return sum;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,x,ans=0;
        cin>>n>>x;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%x!=0)
                ans++;
        }
        ll i=0,j=v.size()-1;
        while(Sum(v,i,j)%x==0 and i<j)
        {
            if(Sum(v,i+1,j)%x!=0)
            {
                i++;
                break;
            }
            else if(Sum(v,i,j-1)%x!=0)
            {
                j--;
                break;
            }
            else if(Sum(v,i+1,j-1)%x!=0)
            {
                i++,j--;
                break;
            }
            else if(Sum(v,i+1,j-1)%x==0)
            {
                i++,j--;
            }
        }
        if(i>j and ans==0)
            cout<<"-1\n";
        else if (i>j and ans!=0)
            cout<<"1\n";
        else
            cout<<j-i+1<<endl;

    }
    return 0;
}
