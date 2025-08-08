class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int majority=nums[0] , votes=0;

       for(int num:nums){
        if(votes==0){
            majority=num;
            votes=1;
        }else if(majority==num){
            votes++;
        }else{
            votes--;
        }
       }
       return majority;
    }
};