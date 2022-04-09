class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,long>count;
        for(const auto&a:arr){
            count[a]++;
        }
        long result=0;
        for(const auto& x1:count){
            for(const auto& x2:count){
                int i=x1.first,j=x2.first,k=target-i-j;
                if(!count.count(k)){
                    continue;
                }
                if(i==j&&j==k){
                    result=result+count[i]*(count[i]-1)*(count[i]-2)/6;
                }else if(i==j&&j!=k){
                    result=result+count[i]*(count[i]-1)/2*count[k];
                }else if(i<j && j<k){
                    result=result+count[i]*count[j]*count[k];
                }
            }
        }
        return result%static_cast<int>(1e9 + 7);
    }
};