class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(int i=0; i<strs.size();i++)
        {
           result += to_string(strs[i].size()) + "#" + strs[i];
        }

        return result;

    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> result;
        while (i < s.size())
        {
            int j = s.find('#', i);
            int len = stoi(s.substr(i, j - i));  // extract length number
            result.push_back(s.substr(j + 1, len));  // extract word
            i = j + 1 + len;  // move i forward
        }
        return result;
    }
};
