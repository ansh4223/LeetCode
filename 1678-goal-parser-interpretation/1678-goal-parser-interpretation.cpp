class Solution {
public:
    string interpret(string command) {
        string str;
        for(int i=0;i<command.length();i++){
            if(command[i]=='G'){
                str=str+"G";
            }if(command[i]=='('&& command[i+1]==')'){
                str=str+"o";
                i++;
            }if(command[i]=='('&& command[i+1]=='a'&&command[i+2]=='l'&&command[i+3]==')'){
                str=str+"al";
                i=i+3;
            }
        }
        return str;
    }
};