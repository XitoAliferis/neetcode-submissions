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
            for (map<int,int>::iterator it=counts.begin(); it!=counts.end(); ++it){
                top_val = (it->second > top_count) ? it->first : top_val;
                top_count = (it->second > top_count) ? it->second : top_count;
            }
            topkfrequent.push_back(top_val);
            counts.erase(top_val);
        }
        return topkfrequent;
    }
};
