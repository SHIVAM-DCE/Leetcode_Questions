class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string result="";

        while(i>=0 || j>=0||carry){
            int sum=carry;
            if(i>=0){
                sum+=a[i--]-'0';
            }
            if(j>=0){
                sum+=b[j--]-'0';
            }
            // yaha 2 se divide kiye carry found krne k liye kyuki 2 se 2 ko divide krnr par quotient 1 aata hai aur remainder 0 aur dono ko sath likhe to 10 bnta hai jo ki 2 ki binary value hoti hai wahi agar hme integers ko jodna rhta to 10 ko use krte, octal k liye 8 ka.
            carry=sum/2;
            result+=to_string(sum%2);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};