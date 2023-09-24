/*
Input: s = "cbacdcbc"
Output: "acdb"
 
*/

class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_set<char>st;
        for(auto it : s){
            st.insert(it);
        }
        int uniqueElements = st.size();
        int idx = s.size()-uniqueElements;
        int i = 0;
        vector<string>all;
        while(i <= idx){
            string str;
            // to be done

        }        

    }
};