class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string res = "";
        for(int i=0;i<min(strs[0].length(),strs.back().length());i++){
            if(strs[0][i]==strs.back()[i])
                res+=strs[0][i];
            else 
                break;
        }
        return res;
    }
};