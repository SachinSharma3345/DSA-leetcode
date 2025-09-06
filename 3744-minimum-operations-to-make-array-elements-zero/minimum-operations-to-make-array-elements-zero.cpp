class Solution {
public:
    long long stepsSum(long long n) {
        if(n<= 0) return 0;
        long long sum = 0;
        long long power = 1;
        int step = 1;
        
        while(power<=n){
            long long nextPower = power * 4;
            long long count = min(n, nextPower-1) -power+1;
            sum += count * step;
            power = nextPower;
            step++;
        }
        return sum;
    }
    
    long long minOperations(vector<vector<int>>& queries) {
        long long ans = 0;
        for(auto &q : queries){
            long long l = q[0], r = q[1];
            long long totalSteps = stepsSum(r) - stepsSum(l-1);
            ans+=(totalSteps+1)/2; 
        }
        return ans;
    }
};
