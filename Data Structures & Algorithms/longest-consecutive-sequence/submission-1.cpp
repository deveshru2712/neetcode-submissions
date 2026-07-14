class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set<int> st(nums.begin(), nums.end());
        vector<int> temp(st.begin(), st.end());
        int cnt = 1, ans = 0;
        for (int i = 0; i < temp.size() - 1; i++) {
            if (temp[i] == temp[i + 1] - 1)
                cnt++;
            else {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }

        ans = max(ans, cnt);

        return ans;
    }
};
