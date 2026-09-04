class Solution {
public:
    int mySqrt(int x) {

        int s = 1;
        int e = x;
        int ans = 0;

        while (s <= e) {
            long long mid = s + (e - s) / 2;//long long used here to avoid overflow
            //check mid condition
            if (mid * mid == x) {
                return mid;
            }
            //right condn
            else if (mid * mid < x) {
                ans = mid;
                s = mid + 1;
            }
            //left condn
            else {
                e = mid - 1;
            }
        }
        return ans;
    }
};