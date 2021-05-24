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

void solve(vector<ll> v, ll n)
{
	ll a=v[0],b=v[1],c;
	for(int i=n-1;i>1;i--)
	{
		if(a+b<=v[i])
		{
			cout<<"1 2 "<<i+1<<endl;
			return;
		}
	}
	cout<<"-1\n";
}

int main() {
	ll t;
	cin>>t;
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while(t--)
	{
		ll n;
		cin>>n;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		string s;
		getline(cin,s);
		ll sum=s[0]-'0',l=0,r=0,ans=0;
		while(r<n)
		{
			if(r-l+1==sum)
			{
				ans++;
				r++;
				sum+=s[r]-'0';
			}
			else if(r-l+1<sum)
			{
				sum-=s[l]-'0';
				l++;
			}
			else
			{
				r++;
				sum+=s[r]-'0';
			}
		}
		cout<<ans<<endl;
		/*vector<ll> v;
		for(ll i=0;i<s.size();i++)
		{
			ll count=0;
			while(s[i]=='1' and i<s.size())
			{
				count++;
				i++;
			}
			if(count!=0)
			v.push_back(count);
		}
		sort(v.begin(),v.end());
		ll ans=0;
		if(!v.empty())
		{
			for(ll i=v.size()-1;i>=0;i-=2)
			{
				ans+=v[i];
			}
			cout<<ans<<endl;
		}
		else
		{
			cout<<"0\n";
		}
		for(ll i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;*/
		//cout<<ans<<endl;
	}
	return 0;
}