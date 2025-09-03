class Solution {
public:
    int elementSum(vector<int>& nums){
        int sum = 0;
        for(int i : nums){
            sum +=i;
        }
        return sum;
    }
    int digitSum(vector<int>& nums){
        int sum = 0;
        for(int i :nums){
            while(i){
                sum+= i%10;
                i = i/10;
            }
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int es = elementSum(nums);
        int ds = digitSum(nums);
        return abs(es-ds); 
        
    }
};