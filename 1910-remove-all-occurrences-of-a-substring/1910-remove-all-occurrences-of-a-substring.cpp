class Solution {
public:
    string removeOccurrences(string s, string part) {
        // int pos=s.find(part);
        // while(pos!=string::npos){
        //     s.erase(pos,part.length());
        //     pos=s.find(part);
        // }
        // return s;


        string result="";
        int partLen=part.length();
        for(char c :s){
            result.push_back(c);

            if(result.length()>=partLen && result.substr(result.length()-partLen)==part){
                result.erase(result.length()-partLen);
            }
        }
        return result;
    }
};