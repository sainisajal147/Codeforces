#include <iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i=0,j=1,k=2,flag=0;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll tempi=i,tempj=j,tempk=k;
        for(j=1;i<n-1;j++)
        {
            i=0,k=n-1;
            while(i<j)
            {
                if(v[i]<v[j])
                    break;
                i++;
            }
            while(j<k)
            {
                if(v[k]<v[j])
                    break;
                k--;
            }
            if(v[i]<v[j] and v[j]>v[k])
            {
                flag=1;
                break;
            }
        }
        if(flag==1 and i<j and j<k)
        {
            cout<<"YES\n";
            cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
