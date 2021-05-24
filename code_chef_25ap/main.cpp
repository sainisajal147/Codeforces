#include <iostream>

using namespace std;
void Swap(long long int &a,long long int &b)
{
    long long int temp=a;
    a=b;
    b=temp;
}
long long int arraySortedOrNot(long long int arr[],long long int n)
{
   if (n == 1 || n == 0)
        return 1;
    if (arr[n - 1] < arr[n - 2])
        return 0;
    return arraySortedOrNot(arr, n - 1);
}
int main()
{
    long long int t;
   cin>>t;
    while(t--)
     {
            long long int n,k;
            cin>>n>>k;
            long long int a[n];
            for(long long int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(long long int i=0;i<n-k;i++)
            {
              if(a[i]>a[i+k])
                Swap(a[i],a[i+k]);
            }
            if(arraySortedOrNot(a,n))
                cout<<"yes\n";
            else
                cout<<"no\n";
    }
    return 0;
}
