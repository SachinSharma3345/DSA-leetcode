class Solution {
public:
    int numSub(string s) {
        const long long mod = 1e9 + 7;
        long long ans = 0;
        long long count = 0;
        for(char c:s){
            if(c=='1'){
                count++;
            }
            else{
                ans = (ans+ count* (count+1)/2)% mod;
                count = 0;
            }

            
        }
        ans = (ans+ count*(count+1)/ 2)% mod;
        return ans;
        
    }
};