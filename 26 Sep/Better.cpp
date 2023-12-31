//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int x) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        vector<vector<int> > output;
        set<vector<int>> ans;
        for(int i = 0; i < n-3; i++)
        {
            for(int j = i + 1; j < n - 2;j++)
            {
                int newX = x - arr[i] - arr[j];
            
            
            int low = j + 1;
            int high = n - 1;
            while(low < high)
            {
                if(arr[low] + arr[high] < newX)
                {
                    low++;
                }
                else if(arr[low] + arr[high] > newX)
                {
                    high--;
                }
                else
                {
                    ans.insert({arr[i],arr[j],arr[low],arr[high]});
                    low++;
                    high--;
                }
            }
            
        }
        
        
    }
        for(auto it : ans)
        {
            output.push_back(it);
        }
        return output;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
