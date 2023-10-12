/*
Container with Most Water

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.
*/

//Code Solution:
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;            // Left pointer starting from the leftmost edge
        int right = height.size() - 1; // Right pointer starting from the rightmost edge
        int maxWater = 0;        // Initialize the maximum water capacity
        
        while (left < right) {
            // Calculate the width of the container
            int width = right - left;
            
            // Calculate the height of the container (the minimum height between the two lines)
            int h = min(height[left], height[right]);
            
            // Calculate the water capacity of the current container
            int water = width * h;
            
            // Update the maximum water capacity if the current container holds more water
            maxWater = max(maxWater, water);
            
            // Move the pointers towards each other
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return maxWater;
    }
};
