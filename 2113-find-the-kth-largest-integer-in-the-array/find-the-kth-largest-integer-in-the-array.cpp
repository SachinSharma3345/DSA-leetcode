class Solution {
public:
    static bool cmp(string a, string b){
        if(a.length()!= b.length()){
            return a.size()<b.size();
        }
        return a<b;

    }
    string kthLargestNumber(vector<string>& nums, int k) {
        // vector<long long> ans;
        // for(string s: nums){
        //     int r  = stoi(s);
        //     ans.push_back(r);
        // }

        sort(nums.begin(), nums.end(), cmp);

        return nums[nums.size()-k];
        
    }
};