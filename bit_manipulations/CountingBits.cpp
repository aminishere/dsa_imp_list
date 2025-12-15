//bit dp
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>bits(n+1);
        for(int i=1;i<n+1;i++){
            bits[i]=bits[i>>1]+(i&1); // dpending on computed ones
        }
        return bits;
    }
};
