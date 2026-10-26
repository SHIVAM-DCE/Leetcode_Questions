class Solution {
public:
    // bool isprime(int n){
    //     if(n<=1) return false;
    //     int  sqrtn=sqrt(n);
    //     for(int i=2;i<=sqrtn;i++){
    //         if(n%i==0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    // int countPrimes(int n) {
    //     int c=0;

    //     for(int i=0;i<n;i++){
    //         if(isprime(i)){
    //             c++;
    //         }
    //     }
    //     return c;


        int countPrimes(int n){
            if(n==0||n==1) return 0;

            vector<bool>primes(n,true);
            primes[0]=primes[1]=false;

            int ans=0;
            for(int i=2;i<n;i++){
                if(primes[i]){
                    ans++;

                    int j=i*2;
                    while(j<n){
                        primes[j]=false;
                        j+=i;
                    }
                }
            }
            return ans;
        }
    
};