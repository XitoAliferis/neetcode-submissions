class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;
        int curr = 1;

        for (int i = 1; i < nums.size(); i++){
            if (nums[i-1] == nums[i] ) continue;
            if (nums[i-1]+1 == nums[i]) {
                curr++;
                longest = max(curr, longest);
            }
            else curr = 1;
        }
        return longest;
    }
};
