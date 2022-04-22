class Solution {
public:
    int minPartitions(string n) {
        char res=0;
        for(int i=0;i<n.length();i++){
            if(res<n[i]){
                res=n[i];
            }
        }
        return res-'0';
    }
};
