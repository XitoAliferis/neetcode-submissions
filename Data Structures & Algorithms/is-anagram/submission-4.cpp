class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> letters_s, letters_t;
        if (s.length()!=t.length()) return false;
        for (int i = 0; i < s.length(); i++){
            if (letters_s.count(s[i])) letters_s[s[i]]++;
            else letters_s.insert({s[i], 1});
            if (letters_t.count(t[i])) letters_t[t[i]]++;
            else letters_t.insert({t[i], 1});
        }
        return letters_s == letters_t;
    }
};
