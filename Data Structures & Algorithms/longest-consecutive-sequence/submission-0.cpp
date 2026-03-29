class Solution {
public:
    int longestConsecutive(vector<int>& nums){

    unordered_set<int> setnum(nums.begin(),nums.end());

    int res=0;
    
    for(auto &n:nums){

        int strike=0,curr=n;
        while (setnum.find(curr)!=setnum.end())
        {
            strike++;
            curr++;
        }
        res=max(res,strike);
        
    }
    return res;
}
};
