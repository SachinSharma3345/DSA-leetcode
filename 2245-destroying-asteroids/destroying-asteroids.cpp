class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long m1 = mass;
        for(const int asteroid:asteroids ){
            if(m1<asteroid){
                return false;
            }
            m1 +=asteroid;
        }
        return true;
        
    }
};