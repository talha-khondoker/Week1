//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	  int result = 0 ;
	    unordered_map<char, int> mp ;
	    for(auto it : pat) {
	        mp[it]++ ;
	    }
	    int count_pat = mp.size() ;
	    
	    int n = txt.size(), m = pat.size(), i = 0, j = 0 ;
	    while(j<n) 
        {
	        if(mp.find(txt[j]) != mp.end()) {
	            mp[txt[j]]-- ;
	            if(mp[txt[j]] == 0) count_pat-- ;
	        }
	        if(j-i+1 == m) 
            {
	            if(count_pat == 0) result++ ;
	            if(mp.find(txt[i]) != mp.end()) 
                {
    	            if(mp[txt[i]] == 0) count_pat++ ;
    	            mp[txt[i]]++ ;
    	        }
	            i++ ;
	        }
	        j++ ;
	    }
	    return result ;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends