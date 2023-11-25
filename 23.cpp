#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string s;
long long int a[1000000], i, j, n, k, p, b, c;
ll digit(ll w)
{
    ll g=w;
    ll sum=0;
    while(w)
    {

        sum=sum+(w%10);
        w=w/10;

    }
    if(g-sum>=k)
        return 1;
    else
        return 0;
}

int main()
{
    cin >> n>>k;
    ll l=k;
    ll r=n;
    ll ans=n+1;
    while(l<=r)
    {
        ll  m=(l+r)/2;

        ll sum=digit(m);



        if(sum==0)
        {
            l=m+1;

        }
        else
        {
            ans=m;
            r=m-1;

        }



    }
   // cout<<ans<<endl;
    cout<<n-ans+1<<endl;


}
