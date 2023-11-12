class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string s1, string s2)
    {
        // Your code here
        if(s1.size()!=s2.size())
          return false;
        int n=s1.size();  
        if(n<=2)
        {
            if(s1!=s2)
              return false;
            else
              return true;
        }
       int check1=0;
       int check2=0;
        for(int i=0;i<n;i++)
        {
            if(i<2)
            {
                if(i==0 && s1[i]!=s2[n-2])
                {
                    
                    check1=1;
                    break;
                }
                else if(i==1 && s1[i]!=s2[n-1])
                {
                  check1=1;
                    break;
                }
            }
            else{
                if(s1[i]!=s2[i-2])
                {
                    check1=1;
                    break;
                }
               
            }
            
        }
        
        for(int i=0;i<n;i++)
        {
            if(i<n-2 && s1[i]!=s2[i+2])
            {
               check2=1;
                    break;
            }
            else{
                if(i==n-2 && s1[i]!=s2[0])
                {
                  check2=1;
                    break;
                }
                if(i==n-1 && s1[i]!=s2[1])
                {
                    check2=1;
                    break;
                }
                 
            }
            
        }
        // cout<<check1 <<" "<< check2<<endl;
        
        if(check1==0 || check2==0)
          return true;
        else
          return false;
          
    }

};
