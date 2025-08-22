class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>freq;
        int sum=0;

        for(int num:nums){
            freq[num]++;
        }
        for(auto& [key,value]: freq){
            if(value==1){
                sum += key;
            }
        }
        return sum;
    }
};