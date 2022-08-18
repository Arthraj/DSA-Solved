#define pb push_back
class Solution {
public:
    int data[20020];
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        memset(data,-1,sizeof(data));
        return solve(nums,0);
    }
    
    int solve(vector<int> & nums,int i){
        int n=nums.size();
        if(n==1)return nums[0];
        if(i>=nums.size())return 0;
        
        if(data[i]!= -1)return data[i];
        
        int currSum=nums[i];
        int currValue=nums[i];
        int index=i+1,j=i+1;

        while(index<n && nums[index]==currValue){
            currSum+=nums[i];
            index++;
            j++;
        }

        while(index<n && nums[index]==currValue+1){
            index++;
        }

        data[i]=max(solve(nums,j),currSum+solve(nums,index));
        return data[i];
    }
    
    
};