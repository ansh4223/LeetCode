class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>kid(n);
        int maxcandies=0;
        for(int i=0;i<n;i++){
            if(candies[i]>maxcandies){
                maxcandies=candies[i];
            }
        }
        for(int i=0;i<n;i++){
            kid[i]=(candies[i]+extraCandies>=maxcandies);
        }return kid;
    }
};