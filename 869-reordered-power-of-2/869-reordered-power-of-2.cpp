class Solution {
public:
    
    bool reorderedPowerOf2(int n) {
        if(n==1)return true;
        
        string s=to_string(n);
        sort(s.begin(),s.end());
        
        vector<string> hash;
        for(int i=0;i<=30;i++){
            long long int power=pow(2,i);
            hash.push_back(to_string(power));
        }
        
        for(int i=0;i<=30;i++){
            sort(hash[i].begin(),hash[i].end());
            if(hash[i]==s)return true;
        }
        return false;
        
        
    }
};