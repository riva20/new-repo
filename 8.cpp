#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[10000005],v[10000005];

void seive()
{
    v[1]=0;
    memset(v,0,sizeof(v));
    for(int i=2; i*i<=10000005; i++)
    {
        if(v[i]==0)
        {
            v[i]=2;

            for(int j=i+i; j<=10000005; j+=i)
            {
                v[j]=1;
            }
        }
    }
}

int main ()
{
    seive();
    ll n;
    cin>>n;
    ll sum=0;
    ll ma=0;
    vector<ll>b;
    for(int i=0; i<n; i++)
    {

        cin>>a[i];

        // ma=max(ma,a[i]);
        if(v[a[i]]==2)

            sum++;
        //cout<<"a[i]="<<a[i]<<"b[i]=";        }

        b.push_back(sum);
        //cout<<b[i]<<endl;
    }

    //  cout<<endl;

    ll q;
    cin>>q;
    while(q--)
    {
        ll p,l,r;
        cin>>p>>l>>r;

        if(p==1)
        {
            // r=min(r,n);
            if(l==1)
                cout<<b[r-1]<<endl;
            else
                cout<<b[r-1]-b[l-2]<<endl;

        }
        else if(p==2)
        {
            if(v[r]==2&&v[a[l-1]]!=2)
            {
                for(int i=l-1; i<n; i++)
                    b[i]++;
            }
            else if(v[r]!=2&&v[a[l-1]]==2)
            {
                for(int i=l-1; i<n; i++)
                    b[i]=b[i]-1;
            }
        }
    }
}

