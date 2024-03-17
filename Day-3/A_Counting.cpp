#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    int r=m-n;
    if(n>m)
    {
        cout<<0;
    }
    else
    {
        cout<<r+1;
    }
    return 0;
}