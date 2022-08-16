#define pb push_back
class Solution {
public:
    
    int fib(int n) {
        vector<int> dp;
        dp.pb(0);
        dp.pb(1);
        
        for(int i=2;i<=n;i++){
            dp.pb(dp[i-1]+dp[i-2]);
        }
        return dp[n];
    }
};

