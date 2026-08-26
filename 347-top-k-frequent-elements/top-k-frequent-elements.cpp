class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mapp;
        for(int num: nums){
            mapp[num]++;
        }

        priority_queue< pair<int, int>, 
            vector<pair<int, int>>, 
            greater<pair<int, int>>> pq;

        for(auto ele: mapp){
            pq.push({ele.second, ele.first});

            if(pq.size()>k){
                pq.pop();
            }

        }

        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;


        


        
        
    }
};