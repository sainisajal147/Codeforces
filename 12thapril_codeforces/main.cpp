#include <iostream>
int fact(int n)
{
    if(n<1)
        return 1;
    else
        return n*fact(n-1);
}
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=1;
        cin>>n;
        int num=(4*n-2)/2;
        cout<<fact(n)*fact((n-1)-1)<<endl;
    }
    return 0;
}
