class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t){
        //     return true;}
        // return false;


        int frequentTable[256]={0};
        for(int i=0;i<s.length();i++){
            frequentTable[int(s[i])]++;
        }
        for(int i=0;i<t.length();i++){
            frequentTable[int(t[i])]--;
        }
        for(int i=0;i<256;i++){
            if(frequentTable[i]!=0){
                return false;
            }
        }
        return true;
    }
};