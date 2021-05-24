#include <iostream>

using namespace std;

int main()
{
    int n,m;
  cin>>n>>m;
  char a[n][m];
  for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        a[i][j] = 'B';
                }
        }
        int bn=n*m,wn=0;
        int wr=bn-wn-1;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
            if(a[i][j+1]== 'B' && a[i][j]=='B' && a[i][j-1]=='B' && a[i+1][j]=='B' && a[i+1][j-1]=='B' && a[i+1][j+1]=='B' && wr>0 && i==0)
               {
                    a[i][j]='W';
                    bn--;
                    wn++;
                    wr--;
               }
               if(a[i][j+1]== 'B' && a[i][j]=='B' && a[i][j-1]=='B' && a[i][j-1]=='B' && a[i-1][j-1]=='B' && a[i-1][j+1]=='B' && wr>0 && i==n)
               {
                    a[i][j]='W';
                    bn--;
                    wn++;
                    wr--;
               }
               if(a[i+1][j]== 'B' && a[i][j]=='B' && a[i-1][j]=='B' && a[i][j+1]=='B' && a[i-1][j+1]=='B' && a[i+1][j+1]=='B' && wr>0 && j==0)
               {
                    a[i][j]='W';
                    bn--;
                    wn++;
                    wr--;
               }
               if(a[i][j+1]== 'B' && a[i][j]=='B' && a[i][j-1]=='B' && a[i][j-1]=='B' && a[i-1][j-1]=='B' && a[i-1][j+1]=='B' && wr>0 && i==n)
               {
                    a[i][j]='W';
                    bn--;
                    wn++;
                    wr--;
               }
               if(a[i][j]== 'B' && a[i][j]=='B' && a[i-1][j]=='B' && a[i][j+1]=='B' && a[i][j-1]=='B' && wr>0)
               {
                    a[i][j]='W';
                    bn--;
                    wn++;
                    wr--;
               }

      }
  }
  for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        cout<<a[i][j];
                }
                cout<<endl;
        }
    return 0;
}
