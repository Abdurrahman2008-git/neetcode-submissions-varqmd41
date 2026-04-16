class Solution {
public:
    int maxProfit(vector<int>& prices){
    
    int maxrate=0;
    int r=0,l=0;
    
    int bestbuy=prices[0];

    while (r<prices.size())
    {
        if(prices[l]<prices[r]){
            int cureentprfote=prices[r]-prices[l];
            maxrate=max(cureentprfote,maxrate);
        }else{
            l=r;
        }
        r++;
    }
    
    return maxrate;
}
};
