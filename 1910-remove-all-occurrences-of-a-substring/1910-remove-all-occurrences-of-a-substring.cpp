class Solution {
public:
    string removeOccurrences(string s, string part) {

        //method 1: 
        size_t position = s.find(part); //size_t ek unsigned datatype hota hai jo ki kisi bhi memory address ko btane ka kam krta hai generally (0 to 2^64-1)
        while(position!=std::string::npos){     //npos ka meaning hota hai -1 generally;
            s.erase(position,part.length());
            position=s.find(part);          // agar string me part nhi milta hai to npos assign ho jayega aur fir condn check hoga (npos!=npos) jo ki galat hoga to loop rook jayega!
        }
        return s;



        // method 2: using substr method and erasing result
        // string result="";
        // int partLen=part.length();
        // for(char c :s){
        //     result.push_back(c);

        //     if(result.length()>=partLen && result.substr(result.length()-partLen)==part){
        //         result.erase(result.length()-partLen);
        //     }
        // }
        // return result;
    }
};