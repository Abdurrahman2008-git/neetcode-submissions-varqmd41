class Solution {
public:
    int maxArea(vector<int>& heights){

    int mostwater=0;
    for(int i=0;i<heights.size();i++){


        for(int j=i+1;j<heights.size();j++){
            
            int distance= j-i;
            int wight=min(heights[i],heights[j]);
            int currentwater=distance*wight;
            mostwater=max(currentwater,mostwater);
        }
    }
    return mostwater;
}
};
