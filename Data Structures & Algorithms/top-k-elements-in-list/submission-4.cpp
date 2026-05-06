class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> counts;
        for (int i = 0; i < nums.size(); i++){
            counts[nums[i]]++;
        }
        vector<int> topkfrequent;
        while (topkfrequent.size() < k){
            int top_count = -1;
            int top_val = -1;
            for (auto& [key,value] : counts){
                top_val = (value > top_count) ? key : top_val;
                top_count = (value > top_count) ? value : top_count;
            }
            topkfrequent.push_back(top_val);
            counts.erase(top_val);
        }
        return topkfrequent;
    }
};
