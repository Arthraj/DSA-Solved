class Solution {
public:
    int change(int sum, vector<int>& coins) {
        int n=coins.size();
        return count(coins,n,sum);
    }
    
    int count(vector<int>& coins,int n,int sum){
        
        int dp[sum+1][n+1];
        for(int i=0;i<=sum;i++)dp[i][0]=0;
        for(int j=0;j<=n;j++)dp[0][j]=1;
        
        for(int i=1;i<=sum;i++){
            for(int j=1;j<=n;j++){
                
                dp[i][j]=dp[i][j-1];
                if(coins[j-1]<=i){
                    dp[i][j]+=dp[i-coins[j-1]][j];
                }
            }
        }
        return dp[sum][n];
        
    }
};