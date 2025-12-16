//lc 33
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high= nums.size()-1;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(nums[mid]== target)return mid;//exact no brainer

            else if(nums[low]<nums[mid]){ //left half is sorted
                if(nums[low]<=target and target <nums[mid]){//this cuz target is present or not given its sorted
                    high =mid-1;
                }else{ // if not present , look into other possibilty /half
                    low= mid+1;
                }
            }else{
                if(nums[mid]<target and target<=nums[high]){ // same but for right half
                    low=mid+1;
                }else{
                    high= mid-1;
                }
            }
        }
        return -1;
    }
};
