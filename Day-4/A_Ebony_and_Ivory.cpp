#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll ev, iv, dm;
    cin>>ev>>iv>>dm;
    bool flag=false;
    for(int i=0; i<=dm; i++)
    {
        for(int j=0; j<=dm; j++)
        {
            ll dmf=(ev*i)+(iv*j);
            if(dmf==dm)
            {
                flag=true;
            }
        }
    }
    if(flag==true)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}