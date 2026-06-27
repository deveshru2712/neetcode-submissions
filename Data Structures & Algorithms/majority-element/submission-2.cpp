class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int freq = 0;
        for (auto it : mp) {
            if (it.second > mp[freq]) freq = it.first;
        }
        return freq;
    }
};