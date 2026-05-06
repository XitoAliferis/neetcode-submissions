class Solution {
public:

    string encode(vector<string>& strs) {
        int key = 2;
        vector<char> temp;
        for (int i = 0; i< strs.size(); i++){
            for (int j = 0; j<strs.at(i).length(); j++){
                temp.push_back(strs.at(i)[j]+key);
            }
            temp.push_back('/');
        }
        return string{temp.begin(), temp.end()};
    }

    vector<string> decode(string s) {
        int key = 2;
        vector<string> temp;
        vector<char> temp_word;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '/') {
                temp.push_back(string{temp_word.begin(), temp_word.end()});
                temp_word.clear();
                continue;
            }
            temp_word.push_back(s[i]-key);
        }
        return temp;
    }
};
