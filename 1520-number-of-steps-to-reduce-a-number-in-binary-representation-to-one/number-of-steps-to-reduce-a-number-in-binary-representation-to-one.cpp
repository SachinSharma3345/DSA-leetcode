class Solution {
public:
    int numSteps(string s) {
        int n = s.size();
        long long steps = 0;
        while(s.size() != 1){
            steps++;
            if(s[s.size() - 1] == '1'){
                int i = s.size() - 1;
                while(i >= 0){
                    if(s[i] == '0'){
                        s[i] = '1';
                        break;
                    }else{
                        s[i] = '0';
                    }
                    i--;
                }
                if(i < 0){
                    s = '1' + s;
                }
            }else{
                s.pop_back();
            }
        }


        return steps;
    }
};