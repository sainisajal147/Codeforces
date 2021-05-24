/*
AUTHOR : SAJAL SAINI
*/
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
#include <math.h>
#include <set>

using namespace std;

typedef long long int ll;

template <class t>
void disp(vector<vector<t>> v)
{
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}

template <class t>
void disp(vector<t> v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

bool isdec(vector<ll> v)
{
	for(int i=0;i<v.size()-1;i++)
	{
		if(v[i]<=v[i+1])
			return false;
	}
	return true;
}

bool isin(vector<ll> v)
{
	for(int i=0;i<v.size()-1;i++)
	{
		if(v[i]>=v[i+1])
			return false;
	}
	return true;
}

int main(void) {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,su=0,c=-1,m=-1;
		cin>>n;
		vector<ll> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			su+=v[i];
		}
		for(int i=1;i<n;i++)
		{
			if((v[i]>=v[i-1] and c==v[i]-v[i-1]) or c==-1)
			{
				c=v[i]-v[i-1];
			}
		}
		for(int i=;i<n;i++)
		{
			if((v[i]<v[i-1]))
			{
				m=v[i-1]-v[i]+c;
			}
		}
		if(c==0 or isin(v) or isdec(v))
		{
			cout<<"0\n";
			return 0;
		}
		cout<<c<<" "<<m<<endl;
	}
	return 0;
}