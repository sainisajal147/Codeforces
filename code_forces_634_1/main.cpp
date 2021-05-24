#include <iostream>
#include<vector>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
   while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int h[n+1]={0};
        for(int i=0;i<n;i++)
           {
                cin>>a[i];
            }
        for(int i=0;i<n;i++)
        {
            h[a[i]]++;
        }
        int m=h[0];
        for(int i=1;i<n+1;i++)
        {
            if(m<h[i])
                m=h[i];
        }
        if(m==1 && n>1)
            cout<<"1\n";
        else if(m>n-m)
            cout<<min(m-1,n+1-m)<<endl;
        else
            cout<<min(m,n-m)<<endl;
   }
    return 0;
}
