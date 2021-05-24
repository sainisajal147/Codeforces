#include <cmath>

#include <map>

#include <math.h>

#include <cstdio>

#include <vector>

#include <string>

#include <iostream>

#include <algorithm>

#include <stack>

#include <queue>

#include <bits/stdc++.h>

using namespace std;



typedef long long int ll;
string out(ll n,char ch)
{
    string s;
    for(ll i=0;i<n;i++)
    {
        s+=ch;
    }
    return s;
}
int main()
{

	ll t;
	cin>>t;
	while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        vector<string> ans(n+1);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(ll i=0;i<=n;i++)
        {
            ans[i]=out(50,'a');
        }
        for(ll i=0;i<n;i++)
        {
            /*for(ll j=v[i];j<50;j++)
            {
                if(ans[i][j]=='a')
                    ans[i+1][j]='b';
                else if(ans[i][j]=='b')
                    ans[i+1][j]='a';
            }*/
            ll j=0;
            for(;j<v[i];j++)
            {
                ans[i+1][j]=ans[i][j];
            }
            for(;j<50;j++)
            {
                if(ans[i][j]=='a')
                    ans[i+1][j]='b';
                else if(ans[i][j]=='b')
                    ans[i+1][j]='a';
            }
        }
        for(int i=0;i<n+1;i++)
        {
            cout<<ans[i]<<endl;
        }
    }
	return 0;

}
