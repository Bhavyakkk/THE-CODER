class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }
        unordered_set<int> seen;
        for (auto& [key, count] : freq) {
            if (seen.count(count))
                return false;
            seen.insert(count);
        }
        return true;
    }
};