// |  -> bitwise OR
// || -> logical OR
//  the i/p is already in bits
// just shifting things
// i/p shifted to right and o/p shifted to left

class Solution {
public:
    int reverseBits(int n) {
        int res=0;
        for(int i=0;i<32;i++){
            int lsb = n&1;
            res= (res<<1) | lsb;
            
            n=n>>1;
        }
        return res;
    }
};
