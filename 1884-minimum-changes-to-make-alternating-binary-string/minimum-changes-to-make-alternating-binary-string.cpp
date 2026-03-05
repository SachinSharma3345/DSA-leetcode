class Solution {
public:
    int minOperations(string s) {
        int  s0 = 0;
        int s1 = 0;
        for(int i =0; i<s.size(); i++){
            if(i%2==0){
                if(s[i]=='0'){
                    s1++;
                }
                else{
                    s0++;
                }
            }
            else{
                if(s[i]=='1'){
                    s1++;
                }
                else{
                    s0++;
                }
            }
        }
        return min(s0,s1);
        
    }
};