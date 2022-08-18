class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        int s=n;
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        multiset<pair<int,int>> st;
        for(auto it:mp){
            int x=n-it.second-n/2;
            st.insert({x,it.second});
        }
        auto it=st.begin();
        int cnt=0;
        while(s>n/2 && it!=st.end()){
            s-=it->second;
            cnt++;
            it++;
        }
        return cnt;
        
    }
};