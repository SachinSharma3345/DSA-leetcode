class Solution {
public:
    int countCollisions(string directions) {
        // int cars= directions.length()-1;
        if(directions.length()==1){
            return 0;
        }
        
        int i =0;
        int j=directions.length()-1;
        int accident = 0;
        while(i<directions.length() && directions[i]=='L'){
            i++;
        }
        while(j>0 && directions[j]=='R'){
            j--;
        }

        for(i; i<=j; i++){
            if(directions[i]=='L')accident++;
            if(directions[i]=='R')accident++;
            else continue;
            
        }
        return accident;






        
    }
};