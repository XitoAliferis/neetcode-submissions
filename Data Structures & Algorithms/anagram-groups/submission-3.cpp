class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // count the letters using a hashmap -> (letter, count)
        map<char, int> letterCounts;
        map<map<char,int>, vector<string>> groups;
        for (int i = 0; i< strs.size();i++){
            for (int j = 0; j < strs[i].length(); j++){
                if (letterCounts.find(strs[i][j]) == letterCounts.end()) letterCounts[strs[i][j]] = 1;
                else letterCounts[strs[i][j]]++;
            }
            groups[letterCounts].push_back(strs[i]);
            letterCounts.clear();
        }
        vector<vector<string>> groupedAnagrams;

        for (auto& pair : groups) {
            groupedAnagrams.push_back(pair.second);
        }
        return groupedAnagrams;
    }
};
