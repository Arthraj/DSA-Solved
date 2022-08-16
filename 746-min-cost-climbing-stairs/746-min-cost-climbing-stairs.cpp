class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        return minCost(cost,n);
    }
    
//     int minCost(vector<int> &cost,int n){
//         if(n==0 || n==1){
//             return 0;
//         }
//         if(n==2)return min(cost[0],cost[1]);    
        
//         int res=min(cost[n-1]+minCost(cost,n-1), cost[n-2]+minCost(cost,n-2));
//         return res;
//     }
    
    int minCost(vector<int>& cost,int n){
        vector<int> dp(n+1,0);
        // dp[2]=min(cost[0],cost[1]);
        
        for(int i=2;i<=n;i++){
            dp[i]=min(cost[i-1]+dp[i-1], cost[i-2]+dp[i-2]);
        }
        return dp[n];
    }
};