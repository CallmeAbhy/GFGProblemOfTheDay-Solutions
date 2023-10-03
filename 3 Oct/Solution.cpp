class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string res;
        n--;
        while(n>=0){
            res+='A'+(n%26);
            n=(n/26);
            n--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
