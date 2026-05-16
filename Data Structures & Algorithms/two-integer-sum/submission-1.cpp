class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // value,index
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            int temp = target - nums[i];
            if (mp.find(temp) != mp.end()) {
                // meaning temp exists in the given array
                return {mp[temp], i};
            }
            mp.insert({nums[i], i});
        }
        return {};
    }
};
