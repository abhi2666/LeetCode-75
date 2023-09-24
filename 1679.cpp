/*
Input: nums = [3,1,3,4,3], k = 6
Output: 1
Explanation: Starting with nums = [3,1,3,4,3]:
- Remove the first two 3's, then nums = [1,4,3]
There are no more pairs that sum up to 6, hence a total of 1 operation.
*/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size()-1, count = 0;
        while(i < j){
            int val = nums[i] + nums[j];
            if(val == k){
                count++;
                i++;
                j--;
            }
            else if(val < k){
                i++;
            }
            else {
                j--;
            }
        }
        return count;
    }
};