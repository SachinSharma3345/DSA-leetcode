class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int n : nums){
            int sum = 0, cnt = 0;
            for (int d = 1; d * d <= n; d++) {
                if (n % d == 0) {
                    int d2 = n / d;
                    if (d == d2) {
                        cnt++;
                        sum += d;
                    } else {
                        cnt += 2;
                        sum += d + d2;
                    }
                }
                if (cnt > 4) break;
            }
            if (cnt == 4) ans += sum;
        }
        return ans;
    }
};
