class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        int left = 0;
        int seen[256] = {0};

        for (int right = 0; right < s.length(); right++) {
            while (seen[s[right]] == 1) {
                seen[s[left]] = 0;
                left++;
            }
            seen[s[right]] = 1;
            maxlen = max(maxlen, right - left + 1);
        }

        return maxlen;
    }
};