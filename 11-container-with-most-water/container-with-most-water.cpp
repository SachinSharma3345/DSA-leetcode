class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int s = 0 ;
        int e = height.size()- 1; 

        while(s<e){
            int h = min(height[s], height[e]);
            int w = e-s;
            max_water = max(max_water, h*w);

            if(height[s]< height[e]){
                s++;

            }
            else{
                e--;

            }
        } 
        return max_water;

    }
};