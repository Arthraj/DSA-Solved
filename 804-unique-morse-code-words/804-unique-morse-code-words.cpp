class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        if(words.size()==1)return 1;
        
        vector<string> hash={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> st;
        
        for(string s: words){
            string temp;
            for(int i=0;i<s.length();i++){
                temp.append(hash[s[i]-'a']);
            }
            st.insert(temp);
        }
        
        return st.size();
    }
};
