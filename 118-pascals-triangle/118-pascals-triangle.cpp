#define v vector
#define pb push_back
class Solution {
public:
    vector<vector<int>> generate(int n) {
        v<v<int>> res(n);
        
        for(int i=0;i<n;i++){
            v<int> temp(i+1);
            temp[0]=temp[i]=1;
            
            for(int j=1;j<i;j++){
                temp[j]=res[i-1][j-1]+res[i-1][j];
            }
            res[i]=temp;
        }
        return res;
    }
};