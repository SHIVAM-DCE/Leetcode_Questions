class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        // string ans="";
        // sort(s.begin(),s.end());
        // int i=0;
        // while(i<s[0].length()&&s[0][i]== s[s.size()-1][i]){
        //     ans+=s[0][i];
        //     i++;
        // }
        // return ans;

        if (s.empty()) return "";
        
        // Strings ko alphabetically sort karein
        sort(s.begin(), s.end());
        
        string first = s[0];
        string last = s[s.size() - 1];
        string lcp = "";
        
        // Sirf pehli aur aakhri string ko compare karein
        for (int i = 0; i < first.size(); i++) {
            if (first[i] == last[i]) {
                lcp += first[i];
            } else {
                break; // Pehla mismatch milte hi loop break kar dein
            }
        }
        return lcp;
    }
};