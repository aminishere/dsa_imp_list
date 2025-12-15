class Solution {
public:
    int reverse(int x) {
        int res=0;
        while(x){
            int digit = x%10;
            x=x/10;
           if(res>INT_MAX/10 || (res==INT_MAX/10 && digit>7)) return 0;
            if(res<INT_MIN/10 || (res==INT_MIN/10 && digit< -8)) return 0;

            res= res*10+digit;
        }
        return res;
    }
};
//overflow check testing  INT_MAX(7 at 1's)  to INT_MIN (8 at 1's) 
//lc 7
