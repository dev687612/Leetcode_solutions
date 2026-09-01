class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        unordered_map<char, string> mp;
        unordered_set<string> used;

        for (char c : pattern) {
            if (!(ss >> word))
                return false;
            if (mp.count(c)){
                if (mp[c] != word) 
                    return false;
                } 
                else {
                    if (used.count(word))
                        return false;
                    mp[c] = word;
                    used.insert(word);
                }
        }
        return !(ss >> word);
    }
};