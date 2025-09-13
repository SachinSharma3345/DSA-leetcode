#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26, 0); 
        vector<char> vowels = {'a','e','i','o','u'};

        for (char c:s) {
            freq[c - 'a']++;
        }

        int maxVowel = 0, maxConsonant = 0;

        for(char v : vowels){
            maxVowel = max(maxVowel, freq[v - 'a']);
        }

        for(int i = 0; i < 26; i++){
            char c = 'a' + i;
            if(find(vowels.begin(), vowels.end(), c) == vowels.end()){
                maxConsonant = max(maxConsonant, freq[i]);
            }
        }

        return maxVowel + maxConsonant;
    }
};
