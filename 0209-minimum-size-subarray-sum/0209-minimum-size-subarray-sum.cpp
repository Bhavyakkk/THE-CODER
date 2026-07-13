class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int currsum = 0;
        int start = 0;
        int minlength = INT_MAX;

        for (int end = 0; end < nums.size(); end++) {
            currsum += nums[end];

            while (currsum >= target) {
                minlength = min(minlength, end - start + 1);

                currsum -= nums[start];
                start++;
            }
        }

        if (minlength == INT_MAX)
            return 0;

        return minlength;
    }
};