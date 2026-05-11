class Solution {
public:
 vector<int> dailyTemperatures(vector<int> & temperatures){
    vector<int> res(temperatures.size(),0);
    stack<pair<int,int>> stack;

    for(int i =0;i<temperatures.size();i++){
        int t=temperatures[i];

        while (!stack.empty() && t> stack.top().first)
        {
            auto fatema_mem=stack.top();
            stack.pop();
            res[fatema_mem.second]= i-fatema_mem.second;
        }
        stack.push({t,i});
    }
    return res;
}


};
