class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int > v1;
        vector<int > v2;
        int num1 = 0;
        int num2 = 0;
        for(int i = 1; i<=n; i++){
            if(i%m==0){
                v1.push_back(i);
            }
            else{
                v2.push_back(i);
            }
        }
        for(int i :v1){
            num1+=i;   
        }
        for(int i :v2){
            num2+=i;   
        }

        return num2 - num1;

        
    }
};