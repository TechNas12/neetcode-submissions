class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_container = 0;
    int i = 0;
    int j = heights.size() - 1;
    while(i < j){
        int height = min(heights[i], heights[j]);
        int width = j - i;
        int area = height * width;
        max_container = max(area, max_container);
        if(heights[i] < heights[j]){
            i++;
        }else{
            j--;
        }
    }
    return max_container;
    }
};
