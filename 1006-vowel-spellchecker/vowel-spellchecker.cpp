#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string devowel(string word) {
        string res;
        for (char c : word) {
            char lower = tolower(c);
            if(lower=='a'|| lower=='e' ||lower=='i' || lower=='o' ||lower=='u')
                res += '*'; 
            else
                res += lower;
        }
        return res;
    }

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact(wordlist.begin(), wordlist.end()); 
        unordered_map<string, string> caseInsensitive;  
        unordered_map<string, string> vowelInsensitive; 

        for(string w : wordlist){
            string lower = w;
            transform(lower.begin(), lower.end(), lower.begin(), ::tolower);

            if (caseInsensitive.find(lower) == caseInsensitive.end())
                caseInsensitive[lower] = w;

            string vmask = devowel(lower);
            if (vowelInsensitive.find(vmask) == vowelInsensitive.end())
                vowelInsensitive[vmask] = w;
        }

        vector<string> ans;
        for(string q : queries){
            if (exact.count(q)) {  
                ans.push_back(q);
                continue;
            }

            string lower = q;
            transform(lower.begin(), lower.end(), lower.begin(), ::tolower);

            if(caseInsensitive.count(lower)){
                ans.push_back(caseInsensitive[lower]); 
                continue;
            }

            string vmask = devowel(lower);
            if(vowelInsensitive.count(vmask)){
                ans.push_back(vowelInsensitive[vmask]);
                continue;
            }

            ans.push_back(""); 
        }

        return ans;
    }
};
