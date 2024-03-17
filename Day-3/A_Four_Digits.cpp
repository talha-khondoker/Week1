#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int k=s.size();
    if(k==3)
    {
        string l="0";
        l=l+s;
        cout<<l;
    }
    if(k==2)
    {
        string l="00";
        l=l+s;
        cout<<l;
    }
    if(k==1)
    {
        string l="000";
        l=l+s;
        cout<<l;
    }
    if(k==4)
    {
        cout<<s;
    }
    return 0;
}