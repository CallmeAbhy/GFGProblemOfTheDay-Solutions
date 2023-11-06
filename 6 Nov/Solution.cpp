//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   int solve(vector<vector<int>>& grid, int n, int m, int type, int x, int y){
        int dir1x[8] = {1, -1, 0, 0, 1, 1, -1, -1};
        int dir1y[8] = {0, 0, 1, -1, -1, 1, 1, -1};
        
        int dir2x[16] = {2, -2, 0, 0, 2, 2, -2, -2, 2, 2, -2, -2, 1, 1, -1, -1};
        int dir2y[16] = {0, 0, 2, -2, -2, 2, 2, -2, 1, -1, 1, -1, 2, -2, 2, -2};
        
        int ret = 0;
        if(type == 1){
            for(int i=0;i<8;i++){
                int nx = x + dir1x[i];
                int ny = y + dir1y[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m){
                    ret+= grid[nx][ny];
                }
            }
        }
        else{
            for(int i=0;i<16;i++){
                int nx = x + dir2x[i];
                int ny = y + dir2y[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m){
                    ret+= grid[nx][ny];
                }
            }
        }
        return ret;
    }
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        vector<int>ans;
        for(int i=0;i<q;i++){
            ans.push_back(solve(mat, n, m, queries[i][0], queries[i][1], queries[i][2]));
        }
        return ans;

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, q, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>q;
        vector<int> queries[q];
        for(int k = 0;k < q;k++){
            cin>>ty>>i>>j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        
        Solution ob;
        vector<int> ans = ob.matrixSum(n, m, mat, q, queries);
        for(int u: ans)
            cout<<u<<"\n";
    }
    return 0;
}
// } Driver Code Ends
