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

struct node
{
	ll w;
	bool inc=true;
};
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		string s;
		getline(cin,s);
		vector<ll> a(n,0),preo,pren;
		for(ll i=0;i<n;i++)
		{
			int x=pren.size()+preo.size();
			if(s[i]=='0')
			{
			if (pren.empty()) {
					preo.push_back(x);
				} else {
					x = pren.back();
					pren.pop_back();
					preo.push_back(x);
				}
			} else {
				if (preo.empty()) {
					pren.push_back(x);
				} else {
					x = preo.back();
					preo.pop_back();
					pren.push_back(x);
				}
			}
			a[i] = x;
		}
		ll z=*max_element(a.begin(),a.end());
		cout<<z+1<<endl;
		for(ll i=0;i<n;i++)
		{
			cout<<a[i]+1<<" ";
		}
		cout<<endl;
	}
	return 0;
}