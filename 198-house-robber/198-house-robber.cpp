#define pb push_back
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        return money(nums,n);
    }
    
//     int money(vector<int> &nums,int n){
//         if(n==1)return nums[0];
//         if(n==2)return max(nums[0],nums[1]);
        
//         return max(money(nums,n-1),money(nums,n-2)+nums[n-1]);
//     }
    
    int money(vector<int> &nums,int n){
        if(n==1)return nums[0];
        vector<int> dp;
        dp.pb(0);
        dp.pb(nums[0]);
        dp.pb(max(nums[0],nums[1]));
        
        for(int i=3;i<=n;i++){
            dp.pb(max(dp[i-1],nums[i-1]+dp[i-2]));
        }
        return dp[n];
    }
};