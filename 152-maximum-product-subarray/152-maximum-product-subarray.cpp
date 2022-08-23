class Solution {
public:
    int maxProduct(vector<int>& A) {
        if (A.empty()) return 0;
		int maxP=1,minP=1;
        int res=INT_MIN;
        
        for(int i=0;i<A.size();i++){
            if(A[i]==0){
                maxP=1;minP=1;
            }
            int temp=maxP*A[i];
            maxP=max({maxP*A[i],minP*A[i],A[i]});
            minP=min({minP*A[i],temp,A[i]});
            res=max(res,maxP);
        }
        
        return res;
    }
};