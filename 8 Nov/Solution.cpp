

class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        int N = matrix.size();
        vector<int> ans;
        for(int i = 0; i < N; i++)
        {
            if(i % 2 == 0)
            {
                for(int j = 0; j < N; j++)
                {
                    ans.push_back(matrix[i][j]);
                }
                
            }
            else
            {
                for(int j = N - 1; j >= 0; j--)
                {
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
        
    }
};
