class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>hash;
        for(int i=0;i<deck.size();i++){
            hash[deck[i]]++;
        }
        int g=0;
        for(auto pair : hash){
            int count=pair.second;
            g=gcd(g,count);
        }
        return g>=2;
    }
};