// max sum val will a[i] + b[i]+ carry  ===3 (each equals to 1)
// carry === 3/2 = 1  or 2/2=1 or 1/2=0

class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i= a.size()-1;
        int j= b.size()-1;
        int carry=0;
        while(i>=0 or j>=0 or carry){
            int sum = carry;
            if(i>=0){
                sum+=a[i--]-'0';
            }
            if(j>=0){
                sum+=b[j--]-'0';
            }
            ans+=(sum%2)+'0';
            carry= sum/2; //--------look it /2
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// LC 67. Add Binary
