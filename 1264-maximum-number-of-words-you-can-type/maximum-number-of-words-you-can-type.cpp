class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
        int count = 0;
        bool canType = true;

        for(char c:text){
            if (c == ' ') {
                if (canType) count++;
                canType = true; 
            } else{
                if(broken.count(c)){
                    canType = false;
                }
            }
        }

        if (canType) count++;

        return count;
        
    }
};