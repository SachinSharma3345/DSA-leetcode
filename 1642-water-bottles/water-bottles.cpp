class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrunk = 0;
        int emptyBottles = 0;
        int currentFullBottles = numBottles;
        while(currentFullBottles>0){
            totalDrunk += currentFullBottles;
            
            emptyBottles += currentFullBottles;
            
            currentFullBottles = 0;
            int newBottles = emptyBottles / numExchange;
            currentFullBottles = newBottles;
            emptyBottles %= numExchange;
        }

        return totalDrunk;


        
    }
};


