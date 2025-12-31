//lc 11
//2 pointer
class Solution {
public:
    int maxArea(vector<int>& height) {
        int r= height.size()-1;
        int l=0;
        int maxi=0;
        while(l<r){
            int h= min(height[l], height[r]);
            int area= h* (r-l);
            maxi=max(maxi, area);
            if(height[l]<height[r])l++;
            else r--;
        }
        return maxi;
    }
};
