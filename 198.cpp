#include<iostream>
using namespace std;
long long ss;
bool ok(long long p)
{
    long long k=p,s=0;
    while(p)
    {
        s+=p%10,p/=10;
    }

    return (k-s)>=ss;
}
int main()
{
    long long n,s,i,j,l,r,ans=0,mid,k;
    cin>>n>>ss;
    l=max(ss,10ll);
    r=n;
    ans=n+1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if (ok(mid)==false)
        {

            l=mid+1;

        }
        else
        {
            ans=mid;
            r=mid-1;
        }

    }
    cout<<ans<<endl;
    cout<<n-ans+1;
}

