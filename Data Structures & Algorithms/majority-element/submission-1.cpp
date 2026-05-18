class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for (auto it : nums) {
            mp[it]++;
        }
        int res = nums[0];

        for (auto it : mp) {
            if (it.second > mp[res]) {
                res = it.first;
            }
        }
        return res;
    }
};