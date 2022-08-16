#define pb push_back
class Solution {
public:
    int climbStairs(int n) {
        // if(n==0)return 1;
        // if(n<0)return 0;
        // return climbStairs(n-1)+climbStairs(n-2);
        
        vector<int> dp;
        dp.pb(1);
        dp.pb(1);
        for(int i=2;i<=n;i++){
            dp.pb(dp[i-1]+dp[i-2]);
        }
        return dp[n];
    }
};