#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin>>n>>m;
    int cnt=1;
    while(n*2<=m)
    {
        n*=2;
        cnt++;
    }
    cout<<cnt;
    return 0;
}