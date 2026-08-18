class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=haystack.find(needle);

        if(ans != string::npos){
            return ans;
        }
        return -1;
    }
};