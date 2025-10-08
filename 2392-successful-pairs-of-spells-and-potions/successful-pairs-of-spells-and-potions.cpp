class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    //     vector<int> result;

    //     for(int spell: spells){
    //         int count = 0;
    //         for(int potion: potions){
    //             if((long long )spell * potion >= success){
    //                 count++;
    //             }
    //         }
    //         result.push_back(count);
    //     }
        
    // return result;    


    sort(potions.begin(), potions.end());
    int m = potions.size();
    vector<int> result;

    for(int spell: spells){
        long long minPotion = (success+spell -1)/ spell;

        auto it = lower_bound(potions.begin(), potions.end(), minPotion);
        int count = potions.end()- it;
        result.push_back(count);
        }
    return result;
    }
};