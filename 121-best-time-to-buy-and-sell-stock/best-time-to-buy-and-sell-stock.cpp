class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int rate = INT_MAX;
        int n = prices.size();
        for(int i = 0; i < n; i++){
            rate = min(rate, prices[i]);
            profit = max(profit, prices[i]- rate);
        }
        return profit;
    }
};