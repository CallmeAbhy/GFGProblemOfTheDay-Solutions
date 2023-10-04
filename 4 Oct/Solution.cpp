//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int ans = 0;
        int n = str.length();
        map <char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        for(int i = n - 1; i >= 0; i--)
        {
            if(i < n && (mp[str[i]]) < mp[str[i+1]])
            {
                ans -= mp[str[i]];
            }
            else
            {
                ans += mp[str[i]];
            }
        }
        return ans;
        
    }
};
