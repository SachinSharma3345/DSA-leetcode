class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a = abs(x-z);
        int b = abs(y-z);
        if(a>b) return 2;
        if(b>a) return 1;
        return 0;
        
    }
};