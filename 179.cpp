/*
[3,30,34,5,9]

Approach -> we have to sort this array of elements but we will have to customize the
sorting algo.
for two strings a, b we will check if a + b > b + a then we will place a before b
ex - > a = "2" b = "3" then 32 > 23 therefore b will be put first than b in sorted
order.

*/

class Solution
{
public:
    static bool comp(string &a, string &b)
    {
        if (a + b > b + a)
            return true;
        else
            return false;
    }
    string largestNumber(vector<int> &nums)
    {
        int n = nums.size();
        vector<string> ele;
        for (int i = 0; i < n; i++)
        {
            ele.push_back(to_string(nums[i]));
        }
        // now sort the vector of strings
        sort(ele.begin(), ele.end(), comp);
        string ans;
        for (auto it : ele)
        {
            ans += it;
        }
        // for test cases where we have a leading zero 
        // ex [0,0] which will result in "00" for these return only "0"
        if(ans[0] == '0') return "0"; //if first element itself is zero then
        // there is only one possibility that there is no element greater than
        //zero that exists in the array.. 
        return ans;
    }
};