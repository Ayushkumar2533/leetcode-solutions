
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        // int end = s.strlen()-1;//std::vector does not uses strlen to find length 
        int end = s.size()-1;

        while(start<=end){
            swap(s[start],s[end]);
                start++;
                end--;
        }
    }
};