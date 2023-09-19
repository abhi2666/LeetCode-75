// Example 1:

// Input: str1 = "ABCABC", str2 = "ABC"
// Output: "ABC"
// Example 2:

// Input: str1 = "ABABAB", str2 = "ABAB"
// Output: "AB"
// Example 3:

// Input: str1 = "LEET", str2 = "CODE"
// Output: ""

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        unordered_map<char, int>mp;
        int i = 0, j = 0;
        string res;
        while(i < str1.size() && j < str2.size()){
            if(str1[i] == str2[j] && mp.find(str1[i]) == mp.end()){
                res += str1[i];
                i++;
                j++;
                mp[str1[i]]++;
            }
            else{
                break;
            }
        }
        return res;
    }
};