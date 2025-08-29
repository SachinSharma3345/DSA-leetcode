class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int a = 0;
        long long int b = (long long)sqrt(c);

        while(a<=b){
            long long sum = a*a + b*b;
            if(sum==c) return true;
            else if(sum>c) b--;
            else a++;

            }
        return false;


        }
        
    
};