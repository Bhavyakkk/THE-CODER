class Solution {
public:
    bool check(vector<int>&nums, int k, int mid){
        int count=1;
        int sum=0;

        for(int num:nums){
            if(sum+num<=mid){
                sum += num;
            }else{
                count++;
                sum=num;
            }
        }
        return count<=k;
    }
    int splitArray(vector<int>& nums, int k) {
       int low=0, high=0;

       for(int num: nums){
        low=max(low,num);
        high += num;
       }
       while(low<high){
        int mid=low+(high-low)/2;

        if(check(nums,k,mid))
        high=mid;
       else
        low=mid+1;
       }
       return low;
    }
};