#include<bits/stdc++.h>
using namespace std;
int c,result;
int n,x,y, z,a[100][100];
void h(int p,int u,int c)
{
    result=max(result,c);
    for (int i=0; i<n; i++)
        if (i != p && a[i][u])
            h(u,i,c+a[i][u]);
}
int main()
{
    cin>>n;
    for (int i=1; i<n; i++)
    {
        cin>>x>>y>>z;
        a[x][y]=z;
        a[y][x]=z;
    }
    h(-1,0,0);
    cout<<result<<endl;
    return 0;
}
