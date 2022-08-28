#define v vector
#define pb push_back
class Solution {
public:
    vector<int> getRow(int n) {
        v<v<int>> res(n+1);
        
        for(int i=0;i<=n;i++){
            v<int> temp(i+1);
            temp[0]=temp[i]=1;
            
            for(int j=1;j<i;j++){
                temp[j]=res[i-1][j-1]+res[i-1][j];
            }
            res[i]=temp;
        }
        return res[n];
    }
};