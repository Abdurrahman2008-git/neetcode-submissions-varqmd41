class Solution {
public:


int maxProfit(vector<int>& prices){
    
    int maxrate=0;
    int l=0,r=1;
    
     while (r<prices.size())
     {
        if(prices[l]<prices[r]){
            maxrate=max(maxrate,prices[r]-prices[l]);
        }else{
            l=r;
        }
        r++;
     }
     
    
    
    return maxrate;
}

int main()
{
    vector<int> a = {10,1,5,6,7,2};
    cout << maxProfit(a) << endl;
    return 0;
}
};
