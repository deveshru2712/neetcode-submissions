class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.size() == 1) {
            return strs[0];
        }

        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs.back();
        
        for (int i = 0; i < min(first.length(), last.length()); i++) {
            if(first[i]!=last[i]){
                return first.substr(0,i);
            }
        }
        return strs[0];
    }
};