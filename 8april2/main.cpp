#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 int t;
    cin>>t;
    while(t--)
   {
            int n;
            cin>>n;
            int nu[2]={0};
            int f=1;
            vector<int> a(n);
            vector<int> b(n);
            for(int i=0;i<n;i++)
               {
                 cin>>a[i];
                 if(a[i]==1)nu[1]++;
                 else if(a[i]==-1)nu[0]++;
               }
            for(int i=0;i<n;i++)
                {
                    cin>>b[i];
                }
            for(int i=n-1;i>=0;i--)
            {
              if(a[i]==1) nu[1]--;
              if(a[i]==-1) nu[0]--;
              if(a[i]>b[i])
              {
                  if(nu[0]<=0)
                    f=0;
              }
              else if(a[i]<b[i])
              {
                  if(nu[1]<=0)
                    f=0;
              }
            }
            if(f==1)
                cout<<"y";
            else
                cout<<"n";
    }
    return 0;
}
