//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    void DFS(vector<vector<int>>& res, vector<int>& nums, int pos, int target, int count, int sum, vector<int>& path){
        if(count == 4){
            if(sum == target) res.push_back(path);
            return;
        }
        for(int i = pos; i < nums.size(); i++){
            if(i != pos && nums[i] == nums[i - 1]) continue;
            if(sum + nums[i] + (3 - count) * nums[nums.size() - 1] < target) continue;
            if(sum + (4 - count)* nums[i] > target) break;
            path.push_back(nums[i]);
            DFS(res, nums, i + 1, target, count + 1, sum + nums[i], path);
            path.pop_back();
       }
    }
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>res;
        vector<int>path;
        DFS(res, nums, 0, target, 0, 0, path);
        return res;
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
