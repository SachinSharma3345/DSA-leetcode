class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int s = 0;
        int e = n-1;
        int max_water = 0;
        while(s<e){
            int l = min(height[s], height[e]);
            int w = e-s;
            max_water = max(max_water, l*w);
            if(height[s]<height[e]){
                s++;
            }
            else{
                e--;
            }
        }
        return max_water;
        
    }
};