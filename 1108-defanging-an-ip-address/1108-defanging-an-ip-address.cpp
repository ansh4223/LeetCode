class Solution {
public:
    string defangIPaddr(string address) {
        string defangIP = "";
        for (char c : address){
            if(c=='.'){
                defangIP = defangIP+"[.]";
            }else{
                defangIP=defangIP+c;
            }
        } 
        return defangIP;
    }
};