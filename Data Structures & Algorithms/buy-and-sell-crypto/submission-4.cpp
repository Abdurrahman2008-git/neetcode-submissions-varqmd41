class Solution {
public:


int maxProfit(vector<int>& prices){
    
    int maxrate = 0;

    for(int i = 0; i < prices.size(); i++){
        
        int bestbuy = prices[i];  // 🔧 fix: i-th day থেকে buy শুরু

        for(int j = i + 1; j < prices.size(); j++){
            
            // 🔧 fix: future-এ গিয়ে lowest buy update (i...j range এর মধ্যে)
            bestbuy = min(bestbuy, prices[j]);

            int currrate = prices[j] - bestbuy;
            maxrate = max(maxrate, currrate);
        }
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
