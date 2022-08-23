class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> v(n);
        v[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            v[i]=max(v[i+1],prices[i]);
        }
        
        int res=0;
        for(int i=0;i<n;i++){
            res=max(res,v[i]-prices[i]);
        }
        return res;
        
    }
};