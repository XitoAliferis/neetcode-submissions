class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int i = 0; i < nums.size(); i++){
            if (seen.contains(nums.at(i))) return true;
            else{
                seen.insert(nums.at(i));
            }
        }
        return false;
    }
};