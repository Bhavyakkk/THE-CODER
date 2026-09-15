class Solution {
public:
    string removeDuplicates(string s) {
        vector<char>st;

        st.push_back(s[0]);

        for(int i=1; i<s.size(); i++){
            if(!st.empty() && st.back()==s[i]){
                st.pop_back();
            }else{
                st.push_back(s[i]);
            }
        }
        string ans(st.begin(),st.end());

        return ans;
    }
};