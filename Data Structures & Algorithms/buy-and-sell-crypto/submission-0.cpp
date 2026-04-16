class Solution {
public:
    int maxProfit(vector<int>& prices){
    
    int maxrate=0;
    for(int i=0;i<prices.size();i++){
        int bestbuy=prices[i];
        
        for(int j=i+1;j<prices.size();j++){
            bestbuy=min(bestbuy,prices[j]);
            int currrate=prices[j]-bestbuy;
            maxrate=max(currrate,maxrate);
        }
    }
    return maxrate;
}
};
