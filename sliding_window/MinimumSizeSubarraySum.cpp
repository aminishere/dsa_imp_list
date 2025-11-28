class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int i=0,j=0;
        int mini=INT_MAX; int currSum=0;
        while(j<n){
            currSum+=nums[j];
            while(currSum>=target){
                
                mini= min(mini, j-i+1);
                currSum-=nums[i];
                i++;
            }
            j++;
        }
        return mini==INT_MAX?0:mini;
    }
};
