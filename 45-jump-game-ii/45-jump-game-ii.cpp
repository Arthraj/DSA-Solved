class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        return jumps(nums,n);
    }
    
//     int jumps(vector<int> & nums,int n){
//         if(n==1)return 0;
//         int mini=INT_MAX;
        
//         for(int i=0;i<=n-2;i++){
//             if(i+nums[i]>=n-1){
//                 int res=jumps(nums,i+1);
//                 if(res!=INT_MAX){
//                     mini=min(res+1,mini);
//                 }
//             }
//         }
//         return mini;
//     }
    
    int jumps(vector<int> & nums,int n){
        int dp[n+1];
        for(int i=0;i<=n;i++)dp[i]=INT_MAX;
        dp[0]=0;
        
        for(int i=1;i<n;i++){
            
            for(int j=0;j<i;j++){
                if(j+nums[j]>=i){
                    if(dp[j]!=INT_MAX){
                        dp[i]=min(dp[i],dp[j]+1);
                    }
                }
            }
        }
            return dp[n-1];
    }
};