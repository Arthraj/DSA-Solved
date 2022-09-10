class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        int t=n*m;
        vector<pair<int,int>> vec;
        
        if(vec.size()==t)return;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0)
                    vec.push_back({i,j});
            }
        }
        
        for(auto it:vec){
            int row=it.first;
            int col=it.second;
            
            for(int i=0;i<n;i++)
                mat[i][col]=0;
            for(int j=0;j<m;j++)
                mat[row][j]=0;
        }
        return ;
    }
};