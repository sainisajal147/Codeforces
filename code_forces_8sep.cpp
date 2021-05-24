
#include <stdio.h>
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
 
ll gcd(ll x, ll y)
{
    ll r = 0, a, b;
    a = (x > y) ? x : y; // a is greater number
    b = (x < y) ? x : y; // b is smaller number
 
    r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
 
void disp(vector<int> v)
{
		for(int j=0;j<v.size();j++)
		{
			cout<<v[j]<<" ";
		}
		cout<<endl;
}
 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<int> v(n);
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		map<int,int> m;
		vector<int> ans;
		ll z=*max_element(v.begin(),v.end());
		for(ll i=0;i<n;i++)
		{
			if(z==v[i])
			{
				m[i]++;
				ans.push_back(v[i]);
			}
		}
		ll gc=*max_element(v.begin(),v.end());
		while(ans.size()<n)
		{
			ll mini=INT_MIN,inc=-1;
			for(ll j=0;j<n;j++)
			{
				if(m[j])
					continue;
				else
				{
					if(mini<gcd(gc,v[j]))
					{
						mini=gcd(gc,v[j]);
						inc=j;
						
					}
				}
			}
			if(inc!=-1)
			{
				ans.push_back(v[inc]);
				gc=gcd(gc,v[inc]);
				m[inc]++;
			}
		}
		disp(ans);	
	}
	return 0;
}