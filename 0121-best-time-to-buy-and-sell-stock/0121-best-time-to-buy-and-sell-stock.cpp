class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyprices=prices[0];
        int profit=0;

        for(int i=0; i<prices.size(); i++){

            if(prices[i]<buyprices){
                buyprices=prices[i];
            }else{
                int currentprofit=prices[i]-buyprices;
                profit= max(currentprofit,profit);
            }
        }
        return profit;
    }
};