class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //creating hash table with help of array for matching
        int hash[256]={0};

        //creating istCharmapped table with help of array for checking already mapped or not
        bool istcharMapped[256]={0};

        // mapping of characters of string s to t
        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==0 && istcharMapped[t[i]]==0){
                hash[s[i]]=t[i];
                istcharMapped[t[i]]=true;
            }
        }

        for(int i=0;i<s.size();i++){
            if(char(hash[s[i]])!=t[i]) return false;
        }
        return true;
    }
};