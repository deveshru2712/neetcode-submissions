class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, elem = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cnt = 1;
                elem = nums[i];
            } else if (nums[i] != elem)
                cnt--;
            else
                cnt++;
        }
        return elem;
    }
};