// product of array except self
/*
1,2,3,4

left ->  1,  1,  2, 6
right -> 24, 12, 4, 1
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int left[n], right[n];
        left[0] = 1;
        right[n-1] = 1;
        for(int i = 1; i < n; i++){
            left[i] = left[i-1]*nums[i-1];
            
            
        }
        for(int i = n-2; i >= 0; i++){
            right[i] = right[i+1]*nums[i+1];
            
        }
        vector<int>res;
        for(int i = 0; i < n; i++){
            int val = left[i]*right[i];
            res.push_back(val);
        }

        return res;
    }
};