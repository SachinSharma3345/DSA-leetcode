class Solution {
public:
    bool judgeCircle(string moves) {
        int countUp = 0;
        int countDown = 0;
        int countLeft = 0;
        int countRight = 0;
        for(char ch:moves){
            if(ch == 'U') countUp++;
            else if(ch=='D') countDown++;
            else if(ch=='L') countLeft++;
            else{
                countRight++;
            }
        }
        if((countUp == countDown) &&(countLeft==countRight)){
            return true;
        }
        return false;
        
    }
};