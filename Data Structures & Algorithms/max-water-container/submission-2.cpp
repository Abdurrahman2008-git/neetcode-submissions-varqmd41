class Solution {
public:
    int maxArea(vector<int>& heights){

    int mostwater=0;
    int left=0;
    int right=heights.size()-1;

    while (left< right)
    {
        int distance=right-left;
        int wight=min(heights[left],heights[right]);
        int currentwater=wight*distance;
        mostwater=max(mostwater,currentwater);

        if(heights[left]<heights[right]){
            left++;
        }else{
            right--;
        }
    }
    
    
    return mostwater;
}
};
