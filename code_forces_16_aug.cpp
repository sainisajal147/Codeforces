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

void disp(vector<ll> v)
{
	for(ll i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
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
		vector<ll> v(n),ans,ans1;
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		bool flag=true;
		ll a=v[0];
		for(ll i=1;i<n;i++)
		{
			if(v[i]!=a)
			{
				flag=false;
			}
		}
		if(flag)
			cout<<n<<endl;
		else
			cout<<"1\n";
	}
	return 0;
}