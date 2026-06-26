class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        
        for(auto it:strs){
            vector<int>freq(26,0);
            for(char ch:it){
                freq[ch-'a']++;
            }
            string key = "";
            for(int i=0;i<26;i++){
                key+='#'+freq[i];
            }
            mp[key].push_back(it);
        }

        // O(n* mlogm)

        
        vector<vector<string>>res;
        for(auto it:mp){
            res.push_back(it.second);    
        }

        return res;
    }
};
