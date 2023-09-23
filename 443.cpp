class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>ans;
        int cnt = 1;
        for(int i = 0; i < chars.size(); i++){
            if(chars[i] == chars[i+1]){
                cnt++;
            }
            else if(chars[i] != chars[i+1]){
                vector<char>digits;
                while(cnt > 0){
                    int digit = cnt%10;
                    digits
                }
            }
        }
    }
};