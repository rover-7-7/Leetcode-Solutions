class Solution {
public:
    int mon(vector<int>& coins, int amount, int i) {
        if (amount == 0)return 0;
        if(i>=coins.size())return 1e9;
        int ntake = mon(coins, amount, i + 1);
        int take = 1e9;
        if (coins[i] <= amount)take = mon(coins, amount - coins[i], i)+1;
        return min(take, ntake);
    }
    int coinChange(vector<int>& coins, int amount) {
       vector<int> dp(amount+1,amount+1);
       dp[0]=0;

       for(auto coin:coins){
        for(int i=coin;i<=amount;i++){
            dp[i]=min(dp[i-coin]+1,dp[i]);
        }

       }
       return dp[amount]>amount?-1:dp[amount];

    }
};