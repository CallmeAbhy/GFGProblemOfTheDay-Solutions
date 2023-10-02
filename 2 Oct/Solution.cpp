//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    long long mod=1e9+7;
	    long long n=s.length();
	    vector<long long> dp(n+1,0);
	    unordered_map<char,long long> m;
	    dp[0]=1;
	    
	    for(long long i=1;i<=n;i++){
	        char ch=s[i-1];
	       dp[i]=(2* dp[i-1]%mod)%mod;
	       
	       if(m.find(ch)!=m.end()){
	           int j=m[ch]%mod;
	           dp[i]=(dp[i]%mod-dp[j-1]%mod +mod)%mod;
	           
	       }
	       m[ch]=i;
	    }
	   // if(dp[n]<=0)
	   //   return mod;
        return dp[n];
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
