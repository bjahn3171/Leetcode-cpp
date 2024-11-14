class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        
        int result = 0;
        int start = prices[0],end = prices[0];
        for (int i = 0; i < prices.size(); ++i){
            if (prices[i] > end){
                end = prices[i];
            }
            else{
                result += end - start;
                end = prices[i];
                start = prices[i];
            }
        }
        if (end > start) result += end - start;
        
        return result;
    }
};