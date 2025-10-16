class Solution {
public:
    string triangleType(vector<int>& nums) {
        
        if(nums.size()<3) return "none";
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];

        if((a+b <=c) || (b+c<=a) || (a+c<= b)){
            return "none";
        }
        if(a==b && b==c && c==a){
            return "equilateral";
        }

        if(a!=b && b!=c && a!=c){
            return "scalene";
        }
        if(a==b || b==c || c==a){
            return "isosceles";

        } 

        return " ";

        
        
    }
};