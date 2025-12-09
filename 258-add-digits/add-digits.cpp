class Solution {
public:
    int addDigits(int num) {
        int a =0;
        if(num<=9) return num;
        
        else{
            while(num>9){
                a = 0;
                while(num>0){
                    int rem = num%10;
                    a+=rem;
                    num= num/10;
                }
                num=a;
            }

        }
        return a;
        
    }
};