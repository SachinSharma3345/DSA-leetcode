class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool>small(26, false);
        vector<bool>cap(26, false);
        for(auto ch:word){
            if(ch>='a' & ch<='z'){
                int ind = ch-'a';
                small[ind]=true;
            }
            else{
                int ind = ch-'A';
                cap[ind]=true;
            }
        }

        int ans=0;
        for(int i=0; i<26; i++){
            if(small[i] && cap[i])ans++;
        }
        return ans;
        
    }
};