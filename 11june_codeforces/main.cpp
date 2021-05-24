#include <iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
void solve(ll a,ll b)
{
    ll ans=0;
    while(a!=0 and b!=0)
    {
        if(a<b)
        {
            a--;
            b-=2;
        }
        else
        {
            b--;
            a-=2;
        }
        ans++;
        if(a==1 and b==1)
            break;
    }
    cout<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,m,f=0;
        cin>>n>>x>>m;
        vector<ll> s;
        for(int i=0;i<m;i++)
        {
            ll l,r;
            cin>>l>>r;
            if(l<=x and x<=r)
            {
                s.push_back(l);
                s.push_back(r);
                f++;
            }
            else
            {
                for(int j=0;j<s.size();j++)
                {
                    if(l<=s[j] and s[j]<=r)
                        {
                            f++;
                            s.push_back(l);
                            s.push_back(r);
                            break;
                        }
                }
            }
        }
        sort(s.begin(),s.end());
        /*for(int i=0;i<s.size();i++)
        {
            cout<<s[i]<<" ";
        }*/
        if(s.size()==0)
        {
            cout<<"1\n";
        }
        else
        {
                ll ans=s[s.size()-1]-s[0]+1;
                cout<<ans<<endl;
        }
    }
    return 0;
}
