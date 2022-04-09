class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,maxA=0;
        while(l<r){
            int lh=height[l];
            int rh=height[r];
            int minh=min(lh,rh);
            maxA=max(maxA,minh*(r-l));
            if(lh<rh){
                l++;
            }else{
                r--;
            }
        }
        return maxA;
    }
};
