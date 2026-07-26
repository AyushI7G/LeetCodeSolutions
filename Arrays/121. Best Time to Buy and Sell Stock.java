class Solution {
    public int maxProfit(int[] prices) {
        int buyingprice = prices[0], currprofit = 0, maxprofit = 0;
        for(int i = 1; i < prices.length; i++){
            if(buyingprice < prices[i]){
                currprofit = prices[i] - buyingprice;
                maxprofit = Math.max(maxprofit, currprofit);
            }
            else{
                buyingprice = prices[i];
            }            
        }
        return maxprofit;
    }
}
