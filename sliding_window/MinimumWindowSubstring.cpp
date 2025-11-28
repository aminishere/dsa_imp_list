class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>need;
        for(auto it: t){
            need[it]++;
        }
        int len= INT_MAX, start=0; //for ans, these are req

        unordered_map<char,int>window;//window surfing req
        int i=0,j=0; int cnt=0;  
        while(j<s.length()){
            char c= s[j++];

            if(need.count(c)){
                window[c]++;
                if(need[c]==window[c])cnt++;
            }

            while(cnt==need.size()){
                if(len>j-i){
                    len=j-i;
                    start=i;
                }
                char d = s[i++];//now compressing since we got one min ans
                if(need.count(d)){
                    if(need[d]== window[d]) cnt--;
                    window[d]--;
                }
            }
        }
        return len==INT_MAX?"":s.substr(start,len);
    }
};
