class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int ,int> freq;
        for(auto ele: arr){
            freq[ele]++;
        }
        bool flag = false;
        int largest = -1;
        for(auto p :freq){
            
            if(p.first==p.second){
                largest = max(p.first, largest);
                flag = true;
            }
        }

        if(flag){
            return largest;
        }

        return -1;
        
    }
};