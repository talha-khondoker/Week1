#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        char ch;
        cin>>ch;
        string s;
        cin>>s;
        s+=s;
        int cnt=0, res=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==ch)
            {
                cnt=0;
                while (s[i]!='g' && i<s.size())
                {
                    cnt++;
                    i++;
                }
                if(cnt>res)
                {
                    res=cnt;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}