#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, p;
    cin>>n>>m>>p;
    int ans=-1;
    for(int i=n; i<m; i++)
    {
        if(i%p==0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}