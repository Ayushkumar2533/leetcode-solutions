class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (!ans.empty() && ans.back() == ch) {
                ans.pop_back();
            } else {
                ans.push_back(ch);
            }
        }
        return ans;
    }
};