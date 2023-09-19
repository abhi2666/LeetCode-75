class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // vector<bool>res; // can't leave like this it will not work
        vector<bool>res(candies.size()); // you will have to give the size as 
        // well
        int maxi = 0;
        for(int i = 0; i < candies.size(); i++){
            maxi = max(maxi, candies[i]);
        }

        for (int i = 0; i < candies.size(); i++)
        {
            int val = candies[i] + extraCandies;
            if(val >= maxi){
                res[i] = true;
            }
            else{
                res[i] = false;
            }

        }

        return res;
        
    
    }
};