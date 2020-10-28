class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_diff=0;
        if(prices.size()==0) {
            return 0;
        }
        for(int i=0;i<prices.size()-1;i++) {
            for(int j=i+1;j<prices.size();j++) {
                max_diff = max(prices[j]-prices[i],max_diff);
            }
        }
        return max_diff;
    }
};
