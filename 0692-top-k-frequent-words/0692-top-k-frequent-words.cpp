class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
       unordered_map<string,int> mp;

       for(string word:words){
        mp[word]++;
       }
       vector<string> v;

       for(auto it:mp){
        v.push_back(it.first);
       }
       sort(v.begin(),v.end(),[&](string a, string b){
       if(mp[a]==mp[b]){
        return a<b;
       }
       return mp[a]>mp[b];
    });
       v.resize(k);

       return v;
    }
};