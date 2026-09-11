class Solution {
public:
    string reorganizeString(string s) {
        vector<int> hash(26, 0);

        for (int i = 0; i < s.size(); i++) {
            hash[s[i] - 'a']++;
        }

        int max = 0, letter = 0;

        for (int i = 0; i < 26; i++) {
            if (hash[i] > max) {
                max = hash[i];
                letter = i;
            }
        }

        if (max > (s.size() + 1) / 2) {
            return "";
        }

        string res(s.size(), ' ');

        int idx = 0;
        while (hash[letter] > 0) {
            res[idx] = 'a' + letter;
            idx += 2;
            hash[letter]--;
        }

        for (int i = 0; i < 26; i++) {
            while (hash[i] > 0) {
                if (idx >= res.length()) {
                    idx = 1;
                }
                res[idx] = 'a' + i;
                idx += 2;
                hash[i]--;
            }
        }

        return res;
    }
};