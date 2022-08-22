class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        float temp=0.5* (log(n)/log(2));
         int res=temp/1;
        
        if(res*1==temp)return true;
        return false;
    }
};

// if(1/2 log(n)/log(2) is integer)