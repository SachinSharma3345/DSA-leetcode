class Solution {
public:
    unordered_map<string, vector<char>> mp;
    unordered_set<string> bad; // memoize impossible rows

    bool dfs(string row) {
        if (row.size() == 1) return true;
        if (bad.count(row)) return false;

        string next;
        return buildNext(row, 0, next);
    }

    bool buildNext(const string &row, int i, string &next) {
        if (i == row.size() - 1) {
            if (dfs(next)) return true;
            bad.insert(row);
            return false;
        }

        string key;
        key.push_back(row[i]);
        key.push_back(row[i + 1]);

        if (!mp.count(key)) return false;

        for (char c : mp[key]) {
            next.push_back(c);
            if (buildNext(row, i + 1, next)) return true;
            next.pop_back();
        }
        return false;
    }

    bool pyramidTransition(string bottom, vector<string>& allowed) {
        for (auto &s : allowed) {
            mp[s.substr(0, 2)].push_back(s[2]);
        }
        return dfs(bottom);
    }
};
