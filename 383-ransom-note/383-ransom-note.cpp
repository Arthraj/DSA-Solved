class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp;
        for(char& ch:magazine){
            mp[ch]++;
        }
        
        for(char ch:ransomNote){
            auto it=mp.find(ch);
            if(it==mp.end() || it->second==0)
                    return false;
            mp[ch]--;
        }
        return true;
    }
};