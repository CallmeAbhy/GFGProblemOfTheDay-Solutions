//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int i,j,r,c,k;
        r=matrix.size();
        c=matrix[0].size();
        
        queue<pair<int,int>> q;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(matrix[i][j]==1){
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty()){
            int qsize=q.size();
            while(qsize--){
                pair<int,int> p=q.front();
                q.pop();
                int x=p.first;
                int y=p.second;
                
                k=0;
                while(k<c){
                    matrix[x][k++]=1;
                }
                
                k=0;
                while(k<r){
                    matrix[k++][y]=1;
                }
            }
            
        }
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends
