class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
    sort(nums.begin(),nums.end());
    set<vector<int>> listofzero;

    for(int i=0;i<nums.size()-2;i++){

        if(nums[i]>0) break;
        if(i>0 && nums[i]==nums[i-1]) continue;
        int left=i+1,right=nums.size()-1;
        while (left<right)
        {
            int sum=nums[i]+nums[left]+nums[right];
            if(sum<0){
                left++;
            }else if(sum>0){
                right--;
            }else{
                listofzero.insert({nums[i],nums[left],nums[right]});
                left++;
                right--;
            }
            while(left < right && nums[left]==nums[left+1]) continue;
            while(left < right && nums[right]==nums[right-1]) continue;
        }
        
    }
    vector<vector<int>> res(listofzero.begin(),listofzero.end());
    return res;
}
};
