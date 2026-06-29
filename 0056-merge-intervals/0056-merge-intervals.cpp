class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> temp;
        temp.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            if (temp.back()[1] >= nums[i][0]) {
                temp.back()[1] = max(temp.back()[1], nums[i][1]);
            } else {
                temp.push_back(nums[i]);
            }
        }
        return temp;
    }
};