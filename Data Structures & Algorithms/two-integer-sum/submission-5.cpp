class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // value,latest_index

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            if (mp[target - nums[i]]) {
                if (i == mp[target - nums[i]]) continue;
                return {i, mp[target - nums[i]]};
            }
        }
        return {};
    }
};
