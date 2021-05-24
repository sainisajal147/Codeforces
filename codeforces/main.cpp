#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;
int main() {
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
        int n,x;
       cin>>n>>x;
    int h[n];
        for(int j=0;j<n;j++)
        {
            cin>>h[j];
        }
        int k=1,v=0,c=0;
        while(k>0)
        {
            for(int j=0;j<n;j++)
            {
                if(x>0)
                {
                    if(k==h[j] && k!=v)
                    {
                        v=k;
                    }
                }
                else if(k==h[j] && x<=0)
                {
                    v=k;
                    c=0;
                    break;
                }
                else
                {
                    c=1;
                }
            }
            if(k!=v && x>0)
            {
                v=k;
                x--;
            }
            if(c==0)
                k++;
            else
                break;
        }
        cout<<v<<"\n";

    }
    return 0;
}
