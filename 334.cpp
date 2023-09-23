/*
Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.

Approach --> we have to pick 3 elements only from a list of unsorted vector
We can traverse the array and get firstmin, secondmin number.
This can be done easily by if else.
Then we can look for 3 element which is greater the both the first and second.
*/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= firstMin) firstMin = nums[i];
            else if(nums[i] <= secondMin) secondMin = nums[i];
            else {
                // means you have a element which is greater than first and second..
                return true;
            }
        }
        return false;
    }
};