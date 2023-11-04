// User function Template for C++

class Solution{
public:
    bool ispal(int i,int j,string &str){
        while(i<j){
            if(str[i]!=str[j])return false;
            i++;
            j--;
        }
        return true;
    }
    int solve(vector<int>&dp,string &str,int i){
        
        if(i==str.size())return 0;
        if(dp[i]!=-1)return dp[i];
        
        int cost=INT_MAX,mincost=0;
        for(int j=i;j<str.size();j++){
            if(ispal(i,j,str))
            mincost=1+solve(dp,str,j+1);
            cost=min(cost,mincost);
        }
        return dp[i]=cost;
    }
    int palindromicPartition(string str)
    {
        // code here
        vector<int>dp(str.size(),-1);
        return solve(dp,str,0)-1;
    }
};
