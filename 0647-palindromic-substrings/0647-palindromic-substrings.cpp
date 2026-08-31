class Solution {
public:
    int countSubstrings(string s) {
      int count=0;
      int n=s.size();

      for(int i=0; i<n; i++){

        int left=i;
        int right=i;

        while(left>=0 && right<n && s[left]==s[right]){
            count++;
            left--;
            right++;
        }

        left=i;
        right=i+1;

        while(left>=0 && right<n && s[left]==s[right]){
            count++;
            left--;
            right++;
        }
      }
      return count;
    }
};