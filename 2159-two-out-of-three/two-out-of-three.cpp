class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        set<int> s1;
        set<int> s2;
        set<int> s3;

        for(int i:nums1){
            s1.insert(i);
        }
        for(int i:nums2){
            s2.insert(i);
        }
        for(int i:nums3){
            s3.insert(i);
        }

        map<int, int> freq_count;
        for(int i :s1)
            freq_count[i]++;
        for(int i :s2)
            freq_count[i]++;
        for(int i :s3)
            freq_count[i]++;
        
        for(auto it:freq_count){
            if(it.second>=2){
                ans.push_back(it.first);
            }
        }
        return ans;

    }
};