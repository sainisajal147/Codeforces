#include <iostream>
#include<string>
using namespace std;
struct ele
{
    long long int l,r;
};
bool mod(long long int x,long long int a, long long int b)
{
    long long int A=x%a,B=x%b;
    if(A%b!=B%a)
        return 1;
    else
        return 0;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,q;
        cin>>a>>b>>q;
        ele A[q];
        for(long long int i=0;i<q;i++)
        {
            cin>>A[i].l>>A[i].r;
        }
        for(long long int i=0;i<q;i++)
        {
            int x=A[i].l,n=0;
            while(x<=A[i].r)
            {
                if(mod(x,a,b))
                    n++;
                x++;
            }
            cout<<n<<" ";
        }
        cout<<endl;
    }
    return 0;
}
