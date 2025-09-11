class Solution {
public:
    string sortVowels(string s) {
        string vowels = "aeiouAEIOU";
        auto isVowel = [&](char c) {
            return vowels.find(c) != string::npos;
        };

        vector<char> v;
        for(char c:s){
            if(isVowel(c)) v.push_back(c);
        }

        sort(v.begin(), v.end());

        int idx = 0;
        for(char &c:s){
            if(isVowel(c)){
                c = v[idx++];
            }
        }

        return s;
    }
};
