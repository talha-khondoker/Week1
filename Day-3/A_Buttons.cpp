#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    if(n==m)
    {
        cout<<n+m;
    }
    if(n>m)
    {
        int k=n-1;
        cout<<n+k;
    }
    if(n<m)
    {
        int l=m-1;
        cout<<m+l;
    }
    return 0;
}