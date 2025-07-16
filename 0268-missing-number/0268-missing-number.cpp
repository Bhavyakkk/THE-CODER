class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int allxor=0;
        int arrxor=0;

        for(int i=0; i<nums.size(); i++){
            allxor ^= i;
            arrxor ^= nums[i];    
            }
        allxor ^= nums.size();

        return allxor^arrxor;
    }
};