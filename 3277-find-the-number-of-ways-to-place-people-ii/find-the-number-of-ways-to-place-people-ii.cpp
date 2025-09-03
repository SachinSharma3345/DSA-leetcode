#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;
        
        sort(points.begin(), points.end(), [](auto &a, auto &b) {
            if(a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });
        
        for(int i = 0; i < n; i++){          
            for(int j = i + 1; j < n; j++){ 
                if(points[i][1] < points[j][1]) continue;
                
                bool valid = true;
                for(int k = i + 1; k < j; k++){
                    if(points[i][0] <= points[k][0] && points[k][0] <= points[j][0] &&
                        points[j][1] <= points[k][1] && points[k][1] <= points[i][1]){
                        valid = false; 
                        break;
                    }
                }
                if(valid) ans++;
            }
        }
        return ans;
    }
};
