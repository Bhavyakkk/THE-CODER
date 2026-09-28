class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string sc:strs){
            string temp=sc;
            sort(temp.begin(),temp.end());

            mp[temp].push_back(sc);
        }
        vector<vector<string>> ans;

        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};