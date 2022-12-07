Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.
  //{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	
    	int count = 0;
    	
    	for (int i=0; i< n; i++)
    	{
    	    int reverse = 0;
    	    int num     = a[i];
    	    while(num > 0) {
    	   
    	        reverse = reverse *10 + num % 10;
    	        num /= 10;
    	    }
    	    if (reverse ==a[i]) count++;
    	   
    	}
    	
    	if (n == count) return true;
    	else return false;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
  
  
