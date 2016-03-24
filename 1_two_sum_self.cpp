class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_multimap<int, int> num_index_pair;
        vector<int> result;
        
        for (auto i = 0; i < nums.size(); i++)
            num_index_pair.insert(pair<int,int>(nums[i],i) );

        // This loop can deal with the case of duplicate keys.
        for (auto& a : num_index_pair) {
            int tmp = target - a.first;
            auto b = num_index_pair.find(tmp);
            if (b != num_index_pair.end() && *b != a) {
                result.push_back(a.second);
                result.push_back(b->second);
                return result;
            }
        }
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }
};