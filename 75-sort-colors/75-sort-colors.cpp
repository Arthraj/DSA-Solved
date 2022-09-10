class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        int n=nums.size();
        if(n==1)return;
        for(auto it:nums){
            if(it==1)c1++;
            else if(it==2) c2++;
        }
        
        c0=nums.size()-c1-c2;
        
        int k=0;
        while(k<n && c0--){
            nums[k]=0;k++;
        }
        while(k<n && c1--){
            nums[k]=1;k++;
        }
        while(k<n && c2--){
            nums[k]=2;k++;
        }
        return;
    }
};