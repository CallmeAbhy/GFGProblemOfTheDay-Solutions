//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	   set<int>s;
	   for(int i=0;i<n;i++)
	   {
	       s.insert(arr[i]*arr[i]);
	   }
	   for(auto j:s)
	   {
	       for(auto k:s)
	       {
	           if(s.find(j+k)!=s.end())
	           {
	               return true;
	           }
	       }
	   }
	   return false;
	}
};
