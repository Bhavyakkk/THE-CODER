class Solution {
public:
    double myPow(double x, int n) {
        long Binarform = n;
        double ans = 1;

        if (n < 0) {
            x = 1 / x;
            Binarform = -Binarform;
        }
        while (Binarform > 0) {
            if (Binarform % 2 == 1) {
                ans *= x;
            }
            x *= x;
            Binarform /= 2;
        }
        return ans;
    }
};