#include <iostream>

using namespace std;

int main()
{
    //int t;
    //cin>>t;
    //while(t--)
    //{
        int n=8,k=6;
        //cin>>n>>k;
        int a[]={0,1, 2, 4, 1, 2, 4, 1, 2};
        int p=0,left=0;
        for(int i=1;i<=n-k;i++)
        {
            int peak=0,l=i+1;
            for(;l<l+k-1;l++)
            {
                if(a[l-1]<a[l] && a[l+1]<a[l])
                    peak++;
            }
            if(p<peak)
                {
                    p=peak;
                    left=l;
                }
        }
        cout<<p+1<<" "<<left<<endl;
    //}
    return 0;
}
