#include <iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef  long long int ll;
bool F(string s,int j,int k)
{
    int N=s.size()-1;
    int st=max(0,j-k),en=min(N,j+k);
    for(int i=st;i<=en;i++)
    {
        if(s[i]=='1' and i!=j)
            return false;
    }
    return true;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll n,k,ans=0,last=-1;
        cin>>n>>k;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1' or s[i]=='&')
                last=i;
            else if(s[i]=='0' and last!=-1 and i-k>=0 and i-k>last)
                {
                    s[i]='&';
                    last=i;
                }
            else if(s[i]=='0' and last==-1)
                {
                    s[i]='&';
                    last=i;
                }
        }
        last=n;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
                last=i;
            else if(s[i]=='&')
            {
                if(last ==n)
                    s[i]='*';
                else if(last<n and i+k<last)
                    s[i]='*';
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
