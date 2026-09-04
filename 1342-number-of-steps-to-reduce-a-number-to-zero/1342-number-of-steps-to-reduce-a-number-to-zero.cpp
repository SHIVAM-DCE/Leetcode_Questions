class Solution {
public:
    int numberOfSteps(int num) {
        int n=num;
        int count=0;
        while(true){
            if(n==0){
                break;
            }
            if(n%2==0){
                n/=2;
                count++;
            }else{
                n-=1;
                count++;
            }
        }
        return count;
    }
};