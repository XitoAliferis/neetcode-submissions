class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // count the letters using a hashmap -> (letter, count)
        map<char, int> letterCounts;
        vector<map<char,int>> wordMaps;
        vector<bool> used;
        for (int i = 0; i< strs.size();i++){
            used.push_back(false);
            for (int j = 0; j < strs[i].length(); j++){
                if (letterCounts.find(strs[i][j]) == letterCounts.end()) letterCounts[strs[i][j]] = 1;
                else letterCounts[strs[i][j]]++;
            }
            wordMaps.push_back(letterCounts);
            letterCounts.clear();
        }
        int idx = 0, i = 0;
        vector<string> group;
        vector<vector<string>> groupedAnagrams;
        while (i < strs.size()){
            if (idx == strs.size()){
                groupedAnagrams.push_back(group);
                group.clear();
                i++;
                idx = i;
                continue;
            }
            if (group.empty() && used[i]) {
                i++;
                idx = i;
                continue;
            }
            if (group.empty()) {
                if (!used[idx]) {
                    group.push_back(strs[idx]);
                    used[idx] = true;
                }
                idx++;
                continue;
            }
            if (wordMaps[i] == wordMaps[idx]){
                if (!used[idx]){
                    group.push_back(strs[idx]);
                    used[idx] = true;
                }
                idx++;
                continue;
            }
            
            idx++;
        }
        return groupedAnagrams;
    }
};
