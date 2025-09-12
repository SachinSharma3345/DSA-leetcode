class Solution {
public:
    bool doesAliceWin(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='o'||s[i]=='i'||s[i]=='u'){
                c++;
            }
        }
        if(c==0){
            return false;
        }
        else{
            return true;
        }
    }
};