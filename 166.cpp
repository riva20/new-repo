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
        string s;
        cin>>s;
        ll l=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
                l++;
        }
        ll d=-1;
        if(l==k)
            cout<<0<<endl;
        else if(l>k)
        {
            cout<<1<<endl;
            for(int i=0; i<n; i++)
            {

                if(s[i]=='B')
                {
                    l--;
                }
                if(l==k)
                {
                    d=i+1;

                    break;
                }

            }
            cout<<d<<" "<<"A"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {

                if(s[i]=='B')
                    l--;
                     if(l+i+1==k)
                {
                    d=i+1;

                    break;
                }
            }
            cout<<1<<endl;
            cout<<d<<" "<<"B"<<endl;
        }
    }

}
