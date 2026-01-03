class Solution {
public:
    int numOfWays(int n) {
        const int mod = 1e9 + 7;

        long long aba = 6; // patterns like RGR, GBG
        long long abc = 6; // patterns like RGB, RBG

        for (int i = 2; i <= n; i++) {
            long long newAba = (aba * 3 + abc * 2) % mod;
            long long newAbc = (aba * 2 + abc * 2) % mod;

            aba = newAba;
            abc = newAbc;
        }

        return (aba + abc) % mod;
    }
};
