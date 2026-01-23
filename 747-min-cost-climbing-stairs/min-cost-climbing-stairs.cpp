class Solution {
public:
    int minCost(vector<int> &dp, vector<int>& cost,int index){
        if(index>=cost.size())return 0;
        if(dp[index]!= -1) return dp[index];
        int ans = cost[index]+min(minCost(dp,cost,index+1 ),minCost(dp, cost,index+2));
        dp[index] = ans;
        return ans;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1, -1);
        int n = cost.size();
        return min(minCost(dp,cost, 1),minCost(dp, cost, 0));

        
    }
};