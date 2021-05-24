#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<queue>
using namespace std;
#define I 32768
/*struct node
{
    int cost;
    int vertex;
    node(int c,int v)
    {
        this->cost=c;
        this->vertex=v;
    }
};
node min_cost(map<int,int> &m)
{
    map<int,int> ::iterator p=m.begin();
    node s(p->second,p->first);
    p++;
    for(;p!=m.end();p++)
    {
        if(s.cost>p->second)
        {
            s.cost=p->second;
            s.vertex=p->first;
        }
    }
    return s;
}
void Dijkstra(int start, int **a,int n)
{
    map<int,int> m;
    for(int j=0;j<n;j++)
    {
       if(j!=start)
        {
            m[j]=a[start][j];
        }
    }
    cout<<"costs from the vertex "<<start<<" is :\n";
    for(int i=0;i<n-1;i++)
    {
        node ans=min_cost(m);
        cout<<ans.vertex<<" "<<ans.cost<<endl;
        m.erase(ans.vertex);
        map<int,int> :: iterator x=m.begin();
        while(x!=m.end())
        {
            if(a[ans.vertex][x->first]+ans.cost<x->second)
                x->second=a[ans.vertex][x->first]+ans.cost;
            x++;
        }
    }
}*/
bool access=true;
void disp(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
void dfs(int **a,int n,int i,vector<int> &A,vector<int> p,vector<int> &visi,int x,vector<int> &df)
{
	if(A[i]==0 and p[i]!=0)
	{
		visi[i]=p[i];
		A[i]=1;
		df.push_back(i);
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==1 and A[j]==0)
				dfs(a,n,j,A,p,visi,x+1,df);
			visi[i]+=visi[j];
		}
	}
}
void bfs(int **a,int n,int i)
{
	vector<int> level(n,0);
	level[i]=1;
	vector<int> visited(n,0);
	queue<int> q;
	q.push(i);
	visited[i]=1;
	cout<<i<<" ";
	while(!q.empty())
	{
		int u=q.front();
		for(int j=0;j<n;j++)
		{
			if(a[u][j]==1 and visited[j]==0)
				{
					level[j]+=level[u]+1;
					cout<<j<<" ";
					q.push(j);
					visited[j]=1;
				}
		}
		q.pop();
	}
	int max_level=level[n-1]+1;
	for(int i=0;i<n;i++)
	{
		level[i]=max_level-level[i];
	}
	cout<<endl;
	disp(level);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<int> p(n),h(n);
	    for(int i=0;i<n;i++)
	    {
	    	cin>>p[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	    	cin>>h[i];
	    }
	    int **a;
	    a=new int * [n];
	    for(int i=0;i<n;i++)
	    {
	        a[i]=new int[n];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            a[i][j]=I;
	        }
	    }
	    for(int i=0;i<n-1;i++)
	    {
	    	int x,y;
	    	cin>>x>>y;
	    	a[x-1][y-1]=1;
	    	a[y-1][x-1]=1;
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(a[i][j]==I)
	                cout<<"_ ";
	                else
	            cout<<a[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	    vector<int> A(n,0),visi(n,0),df;
	    //dfs(a,n,0,A,p,visi,0,df);
	    visi[0]=m;
	    //cout<<endl;
	    //disp(h);
	    //disp(visi);
	    //disp(df);
	    //Dijkstra(0,a,n);
	    /*int sum=0;
	    for(int v=0;i<m;v++)
	    {
	    	sum
	    	if ((a[v] + h[v]) % 2 == 0) {} // first
		    else access = false;
		    g[v] = (a[v] + h[v]) / 2;
		    if (g[v] >= 0 && g[v] <= a[v]) {} // second
		    else access = false;
		    if (sum <= g[v]) {} // third
		    else access = false;
	    }*/
	    bfs(a,n,0);
	    cout<<endl;
	}
    return 0;
}
