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
        ll n;
        cin>>n;
        map<ll,ll>v;
        ll ma=0,me=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            v[a[i]]++;
            ma=max(ma,a[i]);
        }

        for(int i=0; i<=ma+1; i++)
        {
            if(v[i]==0)
            {
                me=i;
                break;
            }
        }
     //  cout<<me<<endl;
        if(me==n)
        {
            cout<<"NO"<<endl;
        }
        else if(v[me+1]==0)
        {
           cout<<"YES"<<endl;

        }
        else
        {
        ll j=0,k=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==me+1)
            {
                j=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]==me+1)
            {
                k=i;
                break;
            }
        }
          for(int i=j; i<=k; i++)
        {
            v[a[i]]--;
            v[me]++;
        }
        ll z=0;
          for(int i=0; i<=me+1; i++)
        {
            if(v[i]==0)
            {
                z=i;
                break;
            }
        }
        if(z==me+1)
        {
            cout<<"YES"<<endl;

        }
        else
            cout<<"NO"<<endl;

        }
    }
}
