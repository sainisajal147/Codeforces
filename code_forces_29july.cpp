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

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,z;
		cin>>n>>k>>z;
		vector<ll> v(n);
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		vector<ll> score(k+1,0);
		score[0]=v[0];
		score[1]=v[0]+v[1];
		ll j=1,count=k-1;
		for(ll i=2;i<=k and j<n ;i++)
		{
			if(count>0)
			{
					if(z>0 and j-1>0 and score[i-1]+v[j-1]>score[i-1]+v[j+1])
					{
						score[i]=score[i-1]+v[j-1];
						j--;
						z--;
						count--;
					}
					else
					{
						score[i]=score[i-1]+v[j+1];
						j++;
						count--;
					}
			}
			else
				break;
		}
		for(int i=0;i<=k;i++)
		{
			cout<<score[i]<<" ";
		}
		cout<<endl;
		cout<<score[k]<<endl;
	}
	return 0;
}