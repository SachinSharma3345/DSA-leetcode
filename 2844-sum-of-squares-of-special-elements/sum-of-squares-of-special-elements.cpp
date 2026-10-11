class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i =1; i<=n; i++){
            if(n%i == 0){
                int sq = nums[i-1]*nums[i-1];
                sum+= sq;
            }
        }
        return sum;
        
    }
};