class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sum = 0;
        for(int i =0; i<s.size(); i++){
            int d = s[i] -'0';
            if(i%2==0){
                sum = sum+d;
            }
            else{
                sum-=d;
            }
        }

        return sum;
        
    }
};