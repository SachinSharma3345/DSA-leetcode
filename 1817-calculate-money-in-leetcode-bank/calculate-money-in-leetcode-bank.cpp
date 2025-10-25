class Solution {
public:
    int totalMoney(int n){
        int weeks = n / 7;
        int days = n % 7;
        int total = 0;

        for(int i = 0; i<weeks; i++){
            total += 28 + (i * 7);  
        }

        int start = weeks + 1;
        for(int d = 0; d<days; d++){
            total += start + d;
        }

        return total;
        
    }
};