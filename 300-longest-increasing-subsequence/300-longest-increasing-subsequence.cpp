class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int maxlen=-1;
        
        int lis[n];
        lis[0]=1;
        for(int i=1;i<n;i++){
            lis[i]=1;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    lis[i]=max(lis[i],lis[j]+1);
                }
            }
        }
        for(int i=0;i<n;i++){
            maxlen=max(lis[i],maxlen);
        }
        return maxlen;
    }
};