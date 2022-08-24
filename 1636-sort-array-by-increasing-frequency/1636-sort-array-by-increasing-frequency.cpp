class Solution {
public:
    
    static bool compare(const pair<int,int> &a,const pair<int,int> &b){
        if(a.second==b.second){
            return (a.first>b.first);
        }
        return (a.second<b.second);
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1)return nums;
        vector<pair<int,int>> v;
        
        int i=0;
        int cnt=0;
        
        while(i<n){
            int x=nums[i];
            while(i<n && nums[i]==x){
                cnt++;i++;
            }
            
            v.push_back({x,cnt});
            cnt=0;
        }
        
        
        sort(v.begin(),v.end(),compare);
        vector<int> res;
        
        for(auto it:v){
            int k=it.second;
            while(k--){
                res.push_back(it.first);
            }
        }
        return res;
    }
};