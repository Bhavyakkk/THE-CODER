class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> ans;
        
        for(int num:nums){
            freq[num]++;

        if(freq[num]==2){
            ans.push_back(num);
        }
        }
        return ans;
    }
};