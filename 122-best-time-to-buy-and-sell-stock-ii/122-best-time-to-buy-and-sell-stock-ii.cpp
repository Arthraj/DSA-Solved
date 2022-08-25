class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==1)return 0;
        int total=0;
        int start=0,end=1;
        
        while(end<n){
            if(prices[start]<prices[end]){
                total+=prices[end]-prices[start];
                start=end;
            }
            else
                start=end;
            end++;
        }
        return total;
    }
};