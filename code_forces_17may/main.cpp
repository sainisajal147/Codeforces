#include <iostream>
#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;
typedef long long int ll;

bool solve(string s, int l, int h)
{
    map<char , int> m;
    for(int i=l;i<=h;i++)
    {
        m[s[i]]++;
    }
    if(m['1']==0 || m['2']==0 || m['3']==0 )
        return false;
    return true;
}
int main()
{
   // ll t;
   // cin>>t;
    //while(t--)
    //{
        string s;
        getline(cin,s);
        ll l=0, h=s.size()-1;
        while(solve(s,l,h))
        {
            l++;
        }
        while(solve(s,l,h))
        {
            h--;
        }
        cout<<l<<" "<<h<<endl;
        cout<<h-l+1<<endl;
   // }
    return 0;
}
