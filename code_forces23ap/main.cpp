#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int min_sum=n*(a-b),max_sum=n*(a+b);
        if(min_sum<c-d || max_sum>c+d)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
