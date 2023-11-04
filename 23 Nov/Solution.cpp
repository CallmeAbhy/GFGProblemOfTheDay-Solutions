class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    vector<int> dp(n,0);
	    dp[0] = arr[0];
	    int ans = arr[0];
	    for(int i=1;i<n;i++)
	    {
	        dp[i] = arr[i];
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j])
	            {
	                dp[i] = max<int>(dp[i],dp[j]+arr[i]);
	                ans = max<int>(ans,dp[i]);
	            }
	        }
	    }
	   // for(int i=0;i<n;i++)
	   // cout<<dp[i]<<" ";
	   // cout<<endl;
	   // return -1;
	   return ans;
	}  
};
