

class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int N)
    {
        // code here
        vector<int> ans;
        int upper = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = N-1; j >= i; j--)
            {
                
                
                    upper += matrix[i][j];
                
            }
        }
        int lower = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                
                    lower += matrix[i][j];
               
            }
        }
        ans.push_back(upper);
        ans.push_back(lower);
        return ans;
    }
};
