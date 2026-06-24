class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int st=0 , end=nums.size()-1;

        while(st<end){
            if(nums[st]%2 > nums[end]%2){
                swap(nums[st],nums[end]);
            }
            if(nums[st]%2==0) st++;
            if(nums[end]%2==1) end--;
        }
        return nums;
    }
};