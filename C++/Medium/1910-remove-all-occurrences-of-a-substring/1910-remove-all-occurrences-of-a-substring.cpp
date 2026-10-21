class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i;
        while ((i = s.find(part)) < s.length()) {
            s.erase(i, part.length());
        }
        return s;
    }
};