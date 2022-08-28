class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        // for(int i=1;i<n;i++){
        //     nums[i]+=nums[i-1];
        // }
        
        vector<int> res;
        for(int i :queries){
            int sum=0,sz=0;
            
            for(int j=0;j<nums.size();j++){
                
                if(sum+nums[j]<=i){
                    sz+=1;
                    sum+=nums[j];
                }
            }
            res.push_back(sz);
        }
        return res;
    }
};