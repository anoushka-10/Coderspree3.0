class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int buy=prices[0],sell=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy=sell = prices[i];
            }
            else if(prices[i]>sell)
                sell=prices[i];
            ans = max(ans,sell-buy);
        }
        return ans;
    }
};