class Solution {
public:
    bool isAnagram(string s, string t) {
          if (s.length() != t.length()) {
            return false;
        }

        int arr[1000]={0};//we can take array of any size as of our preference

        //increase string s count by 1
        for(int i=0;i<=s.length();i++){
            char ch = s[i];
            arr[ch]++;
        }
        //Decrease string t count by 1
        for(int i=0;i<=s.length();i++){
            char ch=t[i];
            arr[ch]--;
        }

        //checks all occurance are 0 only 
        for (int i=0;i<1000;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
};