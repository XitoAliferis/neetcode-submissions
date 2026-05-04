class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // count the letters using a hashmap -> (letter, count)
        map<map<char,int>, vector<string>> groups;
        for (int i = 0; i< strs.size();i++){
            map<char, int> letterCounts;
            for (int j = 0; j < strs[i].length(); j++) {
                letterCounts[strs[i][j]]++;
            }
            groups[letterCounts].push_back(strs[i]);
        }
        vector<vector<string>> groupedAnagrams;

        for (auto& pair : groups) {
            groupedAnagrams.push_back(pair.second);
        }
        return groupedAnagrams;
    }
};
