class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        if(words.size()==1)return 1;
        
        vector<string> hash={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        int cnt=0;
        set<string> st;
        
        for(string s: words){
            string temp;
            for(int i=0;i<s.length();i++){
                temp.append(hash[s[i]-'a']);
            }
            // cout<<temp<<endl;
            if(st.find(temp)==st.end()){
                cnt++;st.insert(temp);
            }
        }
        
        return cnt;
    }
};
