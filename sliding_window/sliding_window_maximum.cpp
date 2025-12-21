//lc 239
//Push (value, index)
//Delete heap top if its index is left of the window
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
            while(!pq.empty() and i-k>=pq.top().second){
                pq.pop();
            }
            if(i+1>=k){
                ans.push_back(pq.top().first);
            }
        }
        return ans;
    }
};
