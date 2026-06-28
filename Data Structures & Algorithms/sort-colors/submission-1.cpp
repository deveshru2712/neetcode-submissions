class Solution {
   public:
    void sortColors(vector<int>& nums) {
        int zeroCount = count(nums.begin(), nums.end(), 0);
        int oneCount = count(nums.begin(), nums.end(), 1);
        int twoCount = count(nums.begin(), nums.end(), 2);

        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount > 0) {
                nums[i] = 0;
                zeroCount--;
            } else if (oneCount > 0) {
                nums[i] = 1;
                oneCount--;
            } else if (twoCount > 0) {
                nums[i] = 2;
                twoCount--;
            }
        }
    }
};