class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> hash;
            vector<int> result;
            
            // add to hash table while after visiting the array,
            // which can deal with the case of duplicate keys.
            for (int i = 0; i < nums.size(); i++) {
                if (hash.find(target - nums[i]) != hash.end()) {
                    result.push_back(hash[target - nums[i]]);
                    result.push_back(i);
                    return result;
                }
                hash.insert(pair<int, int>(nums[i], i));
            }
            result.push_back(-1);
            result.push_back(-1);
            return result;
    }
};