class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        int duplicate = -1, missing = -1;
        for (int i = 1; i <= nums.size(); i++) {
            if (freq[i] == 2)
                duplicate = i;
            else if (freq[i] == 0)
                missing = i;
        }
        return {duplicate, missing};
    }
};