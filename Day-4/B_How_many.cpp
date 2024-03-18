#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int cnt=0; 
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n-i; j++)
        {
            for(int k=0; k<=n-j; k++)
            {
                if((i+j+k)<=n && (i*j*k)<=m)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}