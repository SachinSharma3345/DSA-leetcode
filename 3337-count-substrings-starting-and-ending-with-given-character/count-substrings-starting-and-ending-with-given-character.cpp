class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long prevCountC = 0;
        long long  substrings = 0;
        for(char ch: s){
            if(ch==c){
                substrings += (1+ prevCountC);
                prevCountC++;


            }
        }
        return substrings;
        
    }
};