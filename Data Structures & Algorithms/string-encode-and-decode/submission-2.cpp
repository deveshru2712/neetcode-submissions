class Solution {
public:
    string encode(vector<string>& strs) {
        string res;

        for (string &str : strs) {
            res += to_string(str.size());
            res += '#';
            res += str;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;

        int i = 0;

        while (i < s.size()) {
            string lenStr;

            while (s[i] != '#') {
                lenStr += s[i];
                i++;
            }

            int len = stoi(lenStr);

            i++; // Skip '#'

            res.push_back(s.substr(i, len));

            i += len;
        }

        return res;
    }
};