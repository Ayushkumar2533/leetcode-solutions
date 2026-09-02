class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        int ansIndex = -1;

        while (s <= e) {

            int mid = (s + e) / 2;
            // if mid is on line1
            if (arr[mid] < arr[mid + 1]) {
                // right
                s = mid + 1;
            } else {
                // mid is on line2
                // line2 also contains peak eleme
                ansIndex = mid;
                // left
                e = mid - 1;
            }
        }
        return ansIndex;
    }
};