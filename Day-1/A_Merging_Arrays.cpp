#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin>>n>>m;
    vector<ll>a(n), b(m);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    vector<ll> c(n+m);
    ll i = 0, j = 0, k = 0;
    while(i < n)
    {
    c[k++] = a[i++];
    }
    while(j < m)
    {
    c[k++] = b[j++];
    }
    sort(c.begin(), c.end()); 
    for (auto x : c) 
        cout << x << " "; 
    return 0;
}