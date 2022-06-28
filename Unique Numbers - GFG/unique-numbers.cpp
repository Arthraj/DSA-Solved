// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    bool checkUnique(int n){
	bool hash[10]={false};
	
	while(n>0){
		int lastDigit=n%10;
		if(hash[lastDigit]==true)
			return false;
		else
		    hash[lastDigit]=true;
		n=n/10;
	    }
	return true;
    }
    
    vector<int> uniqueNumbers(int L,int R)
    {
        vector<int> res;
        for(int i=L;i<=R;i++){
            if(checkUnique(i))
                res.push_back(i);
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);
		
		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends