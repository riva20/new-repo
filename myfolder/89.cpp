#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        // cin>>n;
        char s[100][100];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>s[i][j];
            }
        }
        ll k=0;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(s[i][j]=='R')
                {
                    k++;
                }
            }
            if(k==8)
                break;
            else
                k=0;
        }
        if(k==8)
            cout<<"R"<<endl;
        else

            cout<<"B"<<endl;
    }

}
