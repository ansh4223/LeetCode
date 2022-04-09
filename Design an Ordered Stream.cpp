class OrderedStream {
public:
    string *ostream;
    int i=0;
    OrderedStream(int n) {
        ostream = new string[n];
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string>res;
        ostream[idKey-1]=value;
        while(ostream[i]!="\0"){
            res.push_back(ostream[i]);
            i++;
        }
        return res;
    }
};