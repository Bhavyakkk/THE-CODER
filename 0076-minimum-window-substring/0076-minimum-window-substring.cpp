class Solution {
public:
    string minWindow(string s, string t) {
        int maps[256] = {0};
        int mapt[256] = {0};

        for (char ch : t) {
            mapt[ch]++;
        }

        int left = 0, right = 0;
        int minlen = INT_MAX;
        int minstart = 0;

        for (; right < s.size(); right++) {
            maps[s[right]]++;

            while (contain(maps, mapt)) {
                if (right - left + 1 < minlen) {
                    minlen = right - left + 1;
                    minstart = left;
                }

                maps[s[left]]--;
                left++;
            }
        }

        return minlen == INT_MAX ? "" : s.substr(minstart, minlen);
    }

    bool contain(int maps[], int mapt[]) {
        for (int i = 0; i < 256; i++) {
            if (mapt[i] > maps[i]) {
                return false;
            }
        }

        return true;
    }
};