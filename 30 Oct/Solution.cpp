

class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    	long long ans=0;
    	for(int i =0;i<32;i++){
    	    int x=0,y=0;
    	    for(int j=0;j<n;j++){
    	        if(arr[j]&(1<<i)) x++;
    	        else
    	        y++;
    	    }
    	    ans+=1LL*x*y*(1<<i);
    	}
    	return ans;
    }
};
