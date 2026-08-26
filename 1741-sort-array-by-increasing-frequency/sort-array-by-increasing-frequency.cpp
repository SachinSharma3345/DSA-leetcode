// class Solution {
// public:
//     vector<int> frequencySort(vector<int>& nums) {
//         unordered_map<int, int> freq;
//         for(int i : nums){
//             freq[i]++;
//         }

//         priority_queue<
//             pair<int, int>,
//             vector<pair<int, int>>,
//             greater<pair<int, int>>> pq;

//         for(auto ele: freq){
//             pq.push({ele.second, ele.first});

//         }
//         vector<int> ans;

//         while(!pq.empty()){
//             int freq = pq.top().first;
//             int no = pq.top().second;
//             for(int i = 0; i<freq; i++){
//                 ans.push_back(no);
//             }
//             pq.pop();

//         }
//         return ans;
        
//     }
// };


class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int, int> freq;

        // Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        // {frequency, number}
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        for (auto ele : freq) {
            pq.push({ele.second, -ele.first});
        }

        vector<int> ans;

        while (!pq.empty()) {

            int frequency = pq.top().first;
            int number = -pq.top().second;

            for (int i = 0; i < frequency; i++) {
                ans.push_back(number);
            }

            pq.pop();
        }

        return ans;
    }
};