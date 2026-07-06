class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0, max = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums.at(i) == 1){
                curr += 1;
                if (curr > max) max = curr;
            }
            else {
                curr = 0;
            }
        }
        return max;
    }
};