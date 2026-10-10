class Solution {
public:
    string reorganizeString(string s) {
        // creating hash table using array
        int hash[26]={0};

        //counting number of each character appeared
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }

        //finding most appeared character
        char mostFreqChar;
        int maxFreq=INT_MIN;
        for(int i=0;i<26;i++){
            if(hash[i]>maxFreq){
                maxFreq=hash[i];
                mostFreqChar=i+'a';
            }
        }

        //placing most appeared character in string s
        int index=0;
        while(index<s.size() && maxFreq>0){
            s[index]=mostFreqChar;
            maxFreq--;
            index+=2;
        }

        //checking count of most appeared character is zero or not
        if(maxFreq>0) return "";

        //if count of most appeared character is zero then assingning their count value in hash table to zero
        hash[mostFreqChar-'a']=0;

        //now placing remains character in the string s
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                if(index>=s.size()){
                    index=1;
                }
                s[index]=i+'a';
                hash[i]--;
                index+=2;
            }
        }

        //returning string s
        return s;
     }
};