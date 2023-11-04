
class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        /*map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]==0)
            {
                mp[a[i]]=i;
            }
            
        } */
        vector<int>v,p;
        bool b=false,c=false;
        for(int j=0;j<n;j++)
        {
            if(a[j]==x)
            {
                v.push_back(j);
            }
            if(a[j]==y)
            {
                p.push_back(j);
            }
        }
        int res=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<p.size();j++)
            {
                int w=abs(v[i]-p[j]);
                res=min(res,w);
            }
        }
        if(res==INT_MAX)
        {
            return -1;
        }
       return res;
    }
};
