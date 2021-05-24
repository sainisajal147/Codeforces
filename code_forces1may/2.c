#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void b(vector<int> &a, int k)
{
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
    for(int i=1;i<a.size()-k;i++)
    {
        int sum1=0,j=0;
        for(j=i;j<i+k &&j<a.size() ;j++)
        {
            sum1+=a[i];
        }
        if(sum!=sum1)
            {
              a.insert(a.begin()+j-1,sum1-sum);
            }
    }
}
int main()
{
    //long long int t;
    //cin>>t;
    //while(t--)
    //{
        long long int n=4,k=2;
        //cin>>n;
        vector<int > a={1,2,2,1};
        b(a,k);
        for(long long int i=0;i<a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        //cout<<abs(sum1-sum2)<<endl;
    //}
    return 0;
}
