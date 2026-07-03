class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;

        while (i < n && j < n) {
            while (i < n && nums[i] % 2 == 0)
                i += 2;
            while (j < n && nums[j] % 2 == 1)
                j += 2;
            if (i < n)
                swap(nums[i], nums[j]);
            i += 2;
            j += 2;
        }
        return nums;
    }
};