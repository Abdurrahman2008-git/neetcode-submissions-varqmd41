class Solution {
public:
    int maxProfit(vector<int>& prices){
    
    int maxrate=0;
    int bestbuy=prices[0];
    
    for(int i=0;i<prices.size();i++){
        bestbuy=min(bestbuy,prices[i]);
        maxrate=max(maxrate,prices[i]-bestbuy);
    }
      
    
    
    return maxrate;
}
};
