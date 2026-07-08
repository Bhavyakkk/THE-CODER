class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {

        vector<int> need(26, 0);

        for (string word : words2) {

            vector<int> freq(26, 0);

            for (char c : word)
                freq[c - 'a']++;

            for (int i = 0; i < 26; i++)
                need[i] = max(need[i], freq[i]);
        }

        vector<string> ans;

        for (string word : words1) {

            vector<int> freq(26, 0);

            for (char c : word)
                freq[c - 'a']++;

            bool valid = true;

            for (int i = 0; i < 26; i++) {
                if (freq[i] < need[i]) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                ans.push_back(word);
        }

        return ans;
    }
};