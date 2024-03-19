#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==0)
    {
        cout<<sum;
    }
    else
    {
        sort(a, a+n);
        for(int i=0; i<n; i++)
        {
            if((sum-a[i])%2==0)
                {
                    cout<<sum-a[i]<<endl;
                    break;
                }
        }
    }
    return 0;
}