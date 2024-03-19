#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x;
    int a[100000];
    memset(a, -1, sizeof(a));
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        a[x]=x;
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i]==-1)
        {
            cout<<i;
        }
    }
    return 0;
}