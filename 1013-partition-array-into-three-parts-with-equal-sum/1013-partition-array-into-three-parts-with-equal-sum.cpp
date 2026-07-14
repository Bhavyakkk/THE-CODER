class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;

        for (int num : arr) {
            sum += num;
        }

        if (sum % 3 != 0) 
            return false;

            int currsum = 0;
            int target = sum / 3;
            int parts = 0;

            for (int num : arr) {
                currsum += num;

                if(currsum==target){
                    parts++;
                    currsum=0;
                
            }
        }
        return parts >= 3;
    }
};