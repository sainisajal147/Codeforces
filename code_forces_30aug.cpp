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
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
	//ll t;
	//cin >> t;
	//while (t--)
	//{
	ll n, ans1 = 0;
	cin >> n;
	vector<ll> v(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> v[i];
		ans1 += v[i] - 1;
	}
	sort(v.begin(), v.end());
	//cout << c + 1 << endl;
	if (n < 40)
	{
		for (ll j = 2; j < 2e5 + 5; j++)
		{
			ll ans2 = 0;
			for (int i = 0; i < n; i++)
			{
				ans2 += abs(v[i] - pow(j , i));
			}
			if (ans1 > ans2 and ans2 >= 0)
				ans1 = ans2;
		}
	}
	if (n == 1 or n == 2)
	{
		cout << abs(v[0] - 1) << endl;
	}
	else
	{
		cout << ans1 << endl;
	}
	//}
	return 0;
}