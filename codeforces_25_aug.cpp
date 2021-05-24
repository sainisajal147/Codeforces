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

string v(string s,ll x)
{
	ll n=s.size();
	bool flag=false,Z;
	string w(n,'0');
	for(int i=0;i<n;i++)
	{
		Z=false;
		if(i+x<n and s[i+x]=='0')
		{
					w[i]='0';
					Z=true;
				
			}
			if(i-x>=0 and s[i-x]=='0')
			{
					w[i]='0';
					Z=true;
			}
			if(i-x>=0 and s[i-x]=='0' and i+x<n and s[i+x]=='0')
			{
					w[i]='0';
					Z=true;
			}
			if(Z==false)
			{
				w[i]='1';
			}
		}
		return w;
}

int main() {
	ll t;
	cin>>t;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while(t--)
	{
		string s;
		getline(cin,s);
		ll x,n=s.size();
		cin>>x;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		string w=v(s,x);
		/*for (int i = 0; i < n; i++)
	        if (s[i] == '0') {
	            if (i - x >= 0)
	                w[i - x] = '0';
	 
	            if (i + x < n)
	                w[i + x] = '0';
	        }*/
		bool flag=true,z=true;
		for(ll i=0;i<n;i++)
		{
			flag=false;
				if(i-x>=0 and w[i-x]=='1')
				{
					flag=true;
				}
				else if(i+x<n and w[i+x]=='1')
				{
					flag=true;
				}
				if(s[i]!=flag+'0')
				{
					z=false;
					break;
				}
		}
		if(z)
			cout<<w<<endl;
		else
			cout<<"-1\n";
	}
	return 0;
}