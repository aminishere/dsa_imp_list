//keyword : for each bit scan the number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<32;i++){
            int cnt1 =0;
            for(auto it: nums){
                if((it>>i)&1)cnt1++;

            }
            if(cnt1%3){
                res=res | (1<<i);
            }
        }
        return res;
    }
};
