//lc 567
// freq-array(26) , premutaion== freq match, add right- remove left, 
// window valid at i=k-1
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        int n =s2.size();
        vector<int>need(26,0);
        for(auto it: s1){
            need[it-'a']++;
        }
        vector<int>window(26,0);
        for(int i=0;i<n;i++){
            window[s2[i]-'a']++;
            if(i>=k){
                window[s2[i-k]-'a']--;
            }
            if(i>=k-1){
                if(window==need)return true;
            }
        }
        return false;
    }
};
