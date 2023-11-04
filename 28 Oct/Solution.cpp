class Solution
{
public:
    int findset(int n)
    {
        int cnt=0;
        while(n>0)
        {
            if(n%2==1){
                cnt++;
            }
            n=n/2;
        }
        return cnt;
    }
	int is_bleak(int n)
	{
	    // Code here.
	    for(int i=n-30;i<n;i++)
	    {
	        int set=findset(i);
	       // cout<<i<<" "<<set<<endl;
	        if(i+set==n)
	        {
	            return 0;
	        }
	    }
	    return 1;
	}
};
