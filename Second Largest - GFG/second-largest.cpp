// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    if(n==1 || n==0)return -1;
	    if(n==2)return max(arr[0],arr[1]);
	    
	    int res=INT_MIN,maxx=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]>maxx){
	            res=maxx;maxx=arr[i];
	        }
	        else if(arr[i]<maxx && arr[i]>res){
	            res=arr[i];
	        }
	    }
	    if(res==INT_MIN)return -1;
	    return res;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends