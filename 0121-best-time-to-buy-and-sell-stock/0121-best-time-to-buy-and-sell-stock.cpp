class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyersprice=prices[0];
        int profit=0;

        for(int i=0; i<prices.size(); i++){
            if(prices[i]<buyersprice){
                buyersprice=prices[i];
            }
            int currmax=prices[i]-buyersprice;
            profit=max(currmax,profit);
        }
        return profit;
    }
};