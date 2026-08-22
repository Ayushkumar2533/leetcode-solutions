class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(),sorted.end());
        vector<int> ans;
        for(int x : nums) {
            int index = lower_bound(sorted.begin(), sorted.end(), x) - sorted.begin();//lower bound se no.of elements pta chal gya in the vector
            ans.push_back(index);
        }
        return ans;
    }
};