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
#include<math.h>
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void disp(vector<int> v)
{
	for(ll i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
ll sumofdig(ll n)
{
	ll ans=0;
	while(n>0)
	{
		ans+=n%10;
		n/=10;
	}
	return ans;
}
void solve(ll n,ll s)
{
	if(sumofdig(n)<=s)
	{
		cout<<"0\n";
		return;
	}
	ll pw=1, ans=0;
	for(int i=0;i<18;i++)
	{
		ll dig=(n/pw)%10;
		ll a=pw*((10-dig)%10);
		n+=a;
		ans+=a;
		if(sumofdig(n)<=s)
		{
			break;
		}
		pw*=10;
	}
	cout<<ans<<endl;
	/*string z=to_string(n);
	ll sumd=0,count=0,mul=1;
	while(sumd<s and count<z.size())
	{
		sumd+=z[count]-'0';
		mul=z[count]-'0';
		count++;
		mul*=10;
	}
	ll q=z.size()-(count-1);
	cout<<mul*pow(10,z.size())-n<<endl;*/
}
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,s;
		cin>>n>>s;
		solve(n,s);
	}
	return 0;
}