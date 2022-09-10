class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx=INT_MIN;
        for(int it:nums){
            maxx=max(maxx,it);
        }
        if(maxx<0)return maxx;
        
        return maxSum(nums);
    }
    
    int maxSum(vector<int> &nums){
        int i=1;
        int sum=nums[0],maxxsum=nums[0];
        
        while(i<nums.size()){
            if(sum<0)sum=0;
            sum+=nums[i];
            
            maxxsum=max(maxxsum,sum);i++;
        }
        return maxxsum;
    }
};