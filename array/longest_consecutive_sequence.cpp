//lc  128
// keyword : set, .find()
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(), nums.end());
        int maxi =0;
        int n =nums.size();
        for(auto it : st){
            if(st.find(it-1)==st.end()){
            int cnt=1;
            int curr =it;
            while(st.find(curr+1)!=st.end()){
                cnt++;
                curr++;
            }
            maxi=max(maxi, cnt);
            }
        }
        return maxi;
    }
};
