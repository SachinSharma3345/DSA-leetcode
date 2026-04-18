class Solution {
public:

    int reverse(int n){
        int rev_no = 0;
        while(n){
            rev_no = rev_no * 10 + n%10;
            n /=10;

        }
        return rev_no;
    }
    int mirrorDistance(int n) {
        int md = abs(n - reverse(n));
        return md;
        
    }
};