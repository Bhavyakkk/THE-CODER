class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        func(ans,n,0,0,"");
        return ans;
    }

    void func(vector<string> &ans, int n, int open, int close, string str){

        if(str.length()==n*2){
            ans.push_back(str);
            return;
        }

        if(open<n) func(ans,n,open+1,close,str+"(");

        if(close<open) func(ans,n,open,close+1,str+")");
    }
};