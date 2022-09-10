class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxx=INT_MIN,profit=INT_MIN;
        int n=prices.size();
     
        int i=n-1;
        while(i>=0){
            maxx=max(maxx,prices[i]);
            int diff=maxx-prices[i];
            profit=max(profit,diff);
            i--;
        }
        return profit;
    }
};