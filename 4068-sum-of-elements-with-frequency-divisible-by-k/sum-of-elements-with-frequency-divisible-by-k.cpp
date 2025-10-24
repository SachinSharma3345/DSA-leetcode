class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(auto num: nums){
            freq[num]++;
        }
        int sum = 0;

        for(auto &p : freq){
            int value = p.first;
            int count = p.second;
            if(count % k == 0){
                sum += value*count;
            }
        }
        return (int)sum;

        
        
    }
};