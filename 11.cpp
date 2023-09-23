/*
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        // we can use two pointers for this purpose
        int i = 0, j = heights.size()-1;
        int maxArea = 0;
        while(i < j){
            int area = min(height[i], height[j])*(j - i);
            maxArea = max(maxArea, area);
            if(heights[i] < heights[j]) i++;
            else j++;
        }
        return maxArea;
    }
};