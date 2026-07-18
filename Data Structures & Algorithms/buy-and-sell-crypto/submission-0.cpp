class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = prices[0];
        int maxp = 0;
        int p = 0;
        for(int i = 0; i < prices.size(); i++){
            minp = min(minp, prices[i]);
            p = prices[i] - minp;
            maxp = max(p, maxp);
        }
        return maxp;
    }
};
