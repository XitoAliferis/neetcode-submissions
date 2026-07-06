class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0, ret = 0;
        for (int num : nums){
            curr = num ? curr+1 : 0;
            ret = max(curr, ret);
        }
        return ret;
    }
};