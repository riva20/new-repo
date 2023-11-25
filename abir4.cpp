#include <bits/stdc++.h>
using namespace std;
long long int a[1000000],x,y,i,j,k,m,l,n,tc;
int main()
{
    cin>>tc;
    while(tc--)
    {
       cin>>n;
       for(i=0;i<n;i++)
        cin>>a[i];
       for(i=n-1;i>=0;i--)
       {
           if(a[i]>a[i+1])
           {
               while(1)
               {
                   if(a[i]<a[i+1])
                    break;
                   else
                   {
                       a[i]=a[i]/2;
                       m++;
                       cout<<a[i]<<" ";
                   }
                   if(a[i]==0)
                   {
                       m=-1;
                       break;
                   }
               }
           }
                              if(a[i]==0)
                   {
                       m=-1;
                       break;
                   }
       }
        cout<<m<<endl;
       m=0;



    }
}

