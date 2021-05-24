#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long int ll;
void solve(string s)
{
    ll o=0,one=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
            o++;
        else
            one++;
    }
    if(s.size()<3)
    {
        cout<<"0\n";
        return;
    }
    char x=s[0];
    ll a=1;
    vector<ll> v;
    for(int i=1;i<s.size();i++)
    {
        if(x==s[i])
        {
          a++;
        }
        else
        {
            v.push_back(a);
            x=s[i];
        }
    }
    if(v.size()==3)
    {
        if(v[0]+v[1]<v[2])
        {
            cout<<v[0]<<endl;
            return;
        }
    }
    char c=s[0];
    ll ans=0,f=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=c && f==0)
        {
            f++;
            c=s[i];
        }
        else if(s[i]!=c)
        {
            ans++;
        }
    }
    if(o<one)
    cout<<min(ans,o)<<endl;
    else
    cout<<min(ans,one)<<endl;
}
int main()
{
    ll t;
    cin>>t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(t--)
    {
         string s;
         getline(cin,s);
            solve(s);
    }
    return 0;
}
