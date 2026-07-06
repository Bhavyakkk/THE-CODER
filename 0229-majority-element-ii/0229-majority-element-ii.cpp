class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;

        for (int num : nums) {
            freq[num]++;
        }
        for (auto x : freq) {
            if (x.second > nums.size() / 3) {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};