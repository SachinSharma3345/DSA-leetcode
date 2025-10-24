class Solution {
public:
    bool isBalanced(int num) {
        string s = to_string(num);
        int freq[10] = {0};

        for(char c :s)
            freq[c - '0']++;

        for(char c:s){
            int d = c - '0';
            if(freq[d] != d) return false;
        }
        return true;
    }

    int nextBeautifulNumber(int n){
        int num = n + 1;
        while (true) {
            if(isBalanced(num)) return num;
            num++;
        }
    }
};
