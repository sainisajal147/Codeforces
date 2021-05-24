#include <iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
void sw(int &a, int &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}
int main()
{
   // int t;
   // cin>>t;
   // while(t--)
   // {
        int n=6;
      //  cin>>n;
        int a[]={5, -2, 4 ,8 ,6 ,5};
     /*   for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }*/
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            for(int j=i+2;j<n;j++)
            {
                if(abs(a[i]-a[i-1])>abs(a[i]-a[j]))
                sw(a[j],a[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
    return 0;
}
