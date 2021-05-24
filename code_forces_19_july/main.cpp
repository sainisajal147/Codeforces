#include <iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void match(string &a,int l)
{
    string s="abacaba";
    for(int i=0;i<7 and i+l<a.size();i++)
    {
        if(a[i+l]=='?')
        {
            a[i+l]=s[i];
        }
        else if(a[i+l]!=s[i])
            return;
    }
    return ;
}
bool mat(string a,int l)
{
    string s="abacaba";
    int i;
    for(i=0;i<7 and i+l<a.size();i++)
    {
        if(a[i+l]!=s[i])
            return false;
    }
    if(i==7)
    return true;
    else
    return false;
}
int check(string s){
    string temp="abacaba";
	int n = s.length();
	int cnt = 0;
	for(int i = 0;i<n - 6;i++){
		if(s[i]=='a'){
			int f1 = 0;
			for(int j= 0;j<7;j++){
				if(s[i + j]!=temp[j]){
					f1 = 1;
					break;
				}
			}
			if(f1==0){
				cnt++;
			}
		}
	}
	return cnt;
}
void solve(string &s)
{
    string T="abacaba";
    int occ=check(s);
    if(occ==1)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?')
                s[i]='s';
        }
        cout<<"YES\n"<<s<<endl;
        return;
    }
    if(occ>1)
    {
        cout<<"NO\n";
        return;
    }
    /*string temp = "abacaba";
		int flag = 0,n=s.size();
		int cnt = check(s,temp);
		if(cnt==1){
			cout<<"YES"<<endl;
			for(int i = 0;i<n;i++){
				if(s[i]=='?'){
					s[i] = 'd';
				}
			}
			cout<<s<<endl;
			return;
		}
		else if(cnt>1){
			cout<<"NO"<<endl;
			return;
		}*/
		bool F=false;
		int n=s.size();
    for (int i = 0; i + T.size() <= n; ++i) {
            string ss = s;
            bool ok = true;
            for (int j = 0; j < T.size(); j++) {
                if (ss[i + j] != '?' && ss[i + j] != T[j]) {
                    ok = false;
                    break;
                }
                ss[i + j] = T[j];
            }
            if (ok && check(ss) == 1) {
                for (int j = 0; j < n; j++) {
                    if (ss[j] == '?') {
                        ss[j] = 'd';
                    }
                }
                F = true;
                cout << "Yes\n";
                cout << ss << "\n";
                return;
            }
        }
        if (!F) {
            cout << "No\n";
        }
   /* flag = 0,n=s.size();
    //string temp="abacaba";
			for(int i= 0;i<n - 6;i++){
				if(flag==0){
					if(s[i]=='a' or s[i]=='?'){
						int f1 = 0;
						string tot1 = s;
						for(int j = 0;j<7;j++){
							if(tot1[i + j]!=temp[j] and tot1[i+ j]!='?'){
								f1 = 1;
								break;
							}
						}
						if(f1==0){
							for(int j = 0;j<7;j++){
								tot1[i + j] = temp[j];
							}
							int tot2 =check(tot1,temp);
							if(tot2==1){
								flag++;
								s = tot1;
								break;
							}
						}
					}
				}
			}
			if(flag==1){
				for(int i = 0;i<n;i++){
					if(s[i]=='?'){
						s[i] = 'd';
					}
				}
				cout<<"YES"<<endl;
				cout<<s<<endl;
				return;
			}
			else{
				cout<<"NO"<<endl;
				return;
			}*/
}
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       /* ll n;
        cin>>n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        string s;
        getline(cin,s);
        solve(s);*/
        ll l,r,m;
        cin>>l>>r>>m;
        ll x=r-l;
        ll ml=m-r+l,mr=m+r-l;
        for(ll a=l;a<=r;a++)
        {
            ll n=a*((m+a-1)/a);
            if(ml<=n and mr>=n)
            {
                cout<<a<<" "<<l<<" "<<n-m+l<<endl;
                break;
            }
            n-=a;
            if(ml<=n and mr>=n)
            {
                cout<<a<<" "<<m-n+l<<" "<<l<<endl;
                break;
            }
        }
    }
    /*int occ=0;
    string s="abacabacabacaba";
    for(int i=0;i<s.size()-6;i++)
    {
        if(mat(s,i))
            occ++;
    }
    cout<<occ<<endl;*/
    return 0;
}
