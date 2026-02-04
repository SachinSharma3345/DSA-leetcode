class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        map<int , int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<int> ans;
        for(auto p : mp){
            if(p.second> n/3){
                ans.push_back(p.first);
            }

        }
        return ans;
        
    }
};