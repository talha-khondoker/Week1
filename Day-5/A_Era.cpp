#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n; 
        cin>>n;
        int x;
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(x-i>cnt)
            {
                cnt=x-i;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;


// #define ll long long
// #define endl '\n'
// #define debug(n) cout<<(n)<<endl;
// const ll INF = 2e18 + 99;

// int main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   int t;
//   cin>>t;
//   while(t--){
//     int n;
//     cin>>n;
//     int maxel = 0;
//     int x;
//     for(int i = 1; i <= n; i++){
//       cin>>x;
//       if(x - i > maxel){
//         maxel = x - i;
//       }
//     }
//     cout<<maxel<<endl;
//   }

// }

// vector<int> a(n);
//         for(int i=1; i<=n; i++) cin>>a[i];
//         int ans=a[1]-1; 
//         int cnt=ans;
//         for(int i=2; i<=n; i++)
//         {
//             if(cnt+i<a[i])
//             {
//                 int ar=a[i]-(cnt+i);
//                 cnt+=ar;
//                 ans+=ar;
//             }
//         }
//         cout<<ans<<endl;