#include <iostream>
#include<math.h>
using namespace std;

int get_even(int i)
{
    return 2*i;
}
int get_odd(int i)
{
    return 2*i+1;
}
int get_sum(int a[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n/2];
        int sum_even=(n*(n+2))/4,i=0;
        while(i<n/2)
        {
            a[i]=get_odd(i);
            sum_even-=a[i];
            i++;

        }
            i-=1;
         while(sum_even>=2)
        {
                a[i]+=2;
                sum_even-=2;
        }
        if(sum_even==0)
        {
            cout<<"YES\n";
            for(int i=1;i<=n/2;i++)
            {
                cout<<2*i<<" ";
            }
            for(int i=0;i<n/2;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
