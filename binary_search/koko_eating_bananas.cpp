//lc 875
class Solution {
public:
    bool canSheEat(int mid , int h, vector<int>&piles){
        long cnt=0; // no of hrs she took to finish whole piles 
        for(auto it: piles){
            cnt+=(it/mid);
            if(it%mid){
                cnt++;
            }
        }
        return cnt<=h; // it should be less than h
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int high = *max_element(piles.begin(), piles.end());
        while(low<=high){
            int mid = low+ (high-low)/2;
            if(canSheEat(mid, h, piles)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};
