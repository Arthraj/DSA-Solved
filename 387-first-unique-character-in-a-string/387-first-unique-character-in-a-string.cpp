class Solution {
public:
    
    int firstUniqChar(string s) {
        int n=s.length();
        
        unordered_map<char,pair<int,int>> mp;
        
        for(int i=0;i<n;i++){
            mp[s[i]].first++;
            mp[s[i]].second=i;
        }
        
        for(int i=0;i<n;i++){
            if(mp[s[i]].first==1){
                return mp[s[i]].second;
            }
        }
        return -1;
    }
};