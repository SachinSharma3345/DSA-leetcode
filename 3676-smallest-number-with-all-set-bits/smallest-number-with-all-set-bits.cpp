class Solution {
public:
    int smallestNumber(int n) {
        int count =0;
        while(n){
            n = n/2;
            count++;
        }
        return pow(2,count)-1;
        
    }
};