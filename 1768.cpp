/*
Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r

*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        int s1 = word1.size();
        int s2 = word2.size();
        string res = "";
        while(i < s1 && j < s2){
            res += word1[i++];
            res += word2[j++];
        }
        while(i < s1){
            res += word1[i++];
        }
        while(j < s2){
            res += word2[j++];
        }
        return res;
    }
};