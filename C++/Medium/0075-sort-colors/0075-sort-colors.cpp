class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid=0;//mid aur low initially 0 h unsorted array me..
        int low=0;
        int high=nums.size()-1;
        
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }   
    }
};