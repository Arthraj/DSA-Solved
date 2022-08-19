class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxx=INT_MIN;
        for(int i=0;i<n;i++){
            maxx=max(maxx,nums[i]);
        }
        if(maxx<=0)return maxx;
        
        return solve(nums,n);
    }
    
    int solve(vector<int> nums,int n){
        int max_so_far=INT_MIN,max_end_here=0;
        
        for(int i=0;i<n;i++){
            max_end_here+=nums[i];
            max_so_far=max(max_so_far,max_end_here);
            if(max_end_here<0)max_end_here=0;
        }
        return max_so_far;
    }
};