class Solution {
public:
    
    int firstUniqChar(string s) {
        int n=s.length();
        int res=INT_MAX;
        const int N=26;
        
        int hash[N]={0};
        for(int i=0;i<n;i++){
            hash[s[i]-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(hash[i]==1){
                char ch='a'+i;
                size_t found=s.find(ch);
                if(found!=string::npos){
                    if(res>found)res=found;
                }
            }
        }
        if(res==INT_MAX)
            return -1;
        return res;
    }
};