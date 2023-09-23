/**
 * @brief Reverse words in string 
 * points -->
 * 1. there can be leading or trailing spaces which we have to leave
 * 2. there can be multiple spaces between words which will be replaced
 * by single space.
 * 
 */

class Solution {
public:
    string reverseWords(string s) {
        stack<string>words;
        string word = "";
        int i = 0;
        while(i < s.size()){
            if(s[i] == ' '){
                if(word.size() != 0){
                    words.push(word);
                    word = "";
                }
            }else{
                word += s[i];
            }
            i++;
        }
        // now take each word from stack one at a time 
        string res = "";
        while(!words.empty()){
            res += words.top();
            if(!words.empty()){
                res += ' '
            }
        }
        return res;
    }
};