#define v vector
#define pb push_back
class Solution {
public:
    vector<vector<int>> generate(int n) {
        v<v<int>> res;
        v<int> temp;
        temp.pb(1);
        res.pb(temp);
        if(n==1)return res;
        
        temp.pb(1);
        res.pb(temp);
        if(n==2)return res;
        
        for(int i=2;i<n;i++){
            v<int> prev=res[i-1];
            int x=prev.size();
            temp.clear();
            temp.pb(1);
            
            for(int i=0;i<x-1;i++){
                temp.pb(prev[i]+prev[i+1]);
            }
            temp.pb(1);
            res.pb(temp);
        }
        return res;
    }
};