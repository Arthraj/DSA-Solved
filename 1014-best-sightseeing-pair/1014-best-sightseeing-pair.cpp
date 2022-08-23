class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& V) {
        int res=0;
        int n=V.size();
        
        if(n==2){
            return (V[0]+V[1]-1);
        }
        
        vector<int> vec(n);
        vec[n-1]=V[n-1]-n+1;
        for(int i=n-2;i>0;i--){
            vec[i]=max(vec[i+1],V[i]-i);
        }
        
        vec[0]=vec[1];
        for(int j=0;j<n-1;j++){
            res=max(res,V[j]+j+vec[j+1]);
        }
        return res;
        
        
    }
};