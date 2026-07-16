class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_container = INT_MIN;
    for(int i = 0; i < heights.size() - 1; i++){
        for(int j = i + 1; j < heights.size(); j++){
            int width = j - i;
            int height = min(heights[i], heights[j]);
            int size = width * height;
            max_container = max(size,max_container);
        }
    }
    return max_container;
    }
};
