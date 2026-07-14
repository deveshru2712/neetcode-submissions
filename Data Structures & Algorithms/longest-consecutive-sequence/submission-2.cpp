class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        int currLen = 1,maxLen = 0;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int curr = it;
                while(st.find(curr+1)!=st.end()){
                    currLen++;
                    curr++;
                }
                maxLen=max(currLen,maxLen);
                currLen=1;
            }
        }
        return maxLen;
    }
};
