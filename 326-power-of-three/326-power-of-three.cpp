#include <cmath>

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return false;
        
        double temp=log10(n)/log10(3);
//         int x=temp/1;
//         cout<<temp<<" "<<x<<endl;
        
        if(ceil(temp)==floor(temp))return true;
        return false;
    }
};