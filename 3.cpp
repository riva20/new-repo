#include <bits/stdc++.h>

#define ll long long int
using namespace std;
ll a[1000000],b[1000000];
int main ()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {

        ll n,k;
        cin>>n>>k;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
ll sum=0;
                  for(int i=0; i<n; i++)
        {

            sum=sum+a[i];
            b[i]=sum;
          cout<<b[i]<<" ";

        }
        cout<<endl;
     ll   ma=a[n-1];
        ll in=-1,s=0;
      //  cout<<ma<<endl;
             for(int i=0; i<n-1; i+=2)
             {
                 ll u=0;
                 u=a[i]+a[i+1];
              //   cout<<u<<endl;
                 s++;
                 if(u>ma||s>k)
                 {
                    // s--;
                     in=i;
                     break;
                 }
             }
              for(int i=0; i<n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;

             ll g=n-(k-s)-1;

            cout<<in<<endl;
            cout<<g<<endl;
            if(in==-1)
                cout<<b[g-1]<<endl;
            else
            cout<<b[g-1]-b[in-1]<<endl;

    }

    }

