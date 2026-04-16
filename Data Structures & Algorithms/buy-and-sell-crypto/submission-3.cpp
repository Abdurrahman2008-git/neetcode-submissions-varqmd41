class Solution {
public:
 int maxProfit(vector<int>& prices){
    
    int maxrate=0;
    int bestbuy=prices[0];
    
    for(int i=0;i<prices.size();i++){
        if(bestbuy<prices[i]){
            maxrate=max(maxrate,prices[i]-bestbuy);
        }else{
            bestbuy=prices[i];
        }
    }
      
    
    
    return maxrate;
}
};
