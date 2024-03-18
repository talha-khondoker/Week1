#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    unordered_map<char, int> mp;
    for (int i = 0; s[i]; i++) 
    {
        if (mp.find(s[i]) == mp.end()) 
        {
            mp.insert(make_pair(s[i], 1));
        }
        else
        {
            mp[s[i]]++;
        }
    }
    bool k=false;
    char l;
    for(char i='a'; i<='z'; i++ )
    {
        if(mp.find(i)== mp.end())
        {
            l=i;
            k=true;
            break;
        }
    }
    if(k==true)
    {
        cout<<l;
    }
    else
    {
        cout<<"None";
    }
    return 0;
}