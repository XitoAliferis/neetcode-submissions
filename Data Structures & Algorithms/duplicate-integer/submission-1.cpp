class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
              unordered_map<int, int> found;
              for (int i = 0; i < nums.size(); i++){
                if (found.count(nums.at(i))){
                    return true;
                }
                found.insert({nums.at(i), i});
              }
              return false;
    }
};