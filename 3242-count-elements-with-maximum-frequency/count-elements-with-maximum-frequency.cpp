class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int,int> freq;
    for (int x : nums) freq[x]++;
    
    int maxFreq = 0;
    for(auto &p : freq) maxFreq = max(maxFreq, p.second);
    
    int total = 0;
    for(auto &p : freq){
        if(p.second == maxFreq){
            total += p.second;
        }
    }
    return total;
        
    }
};