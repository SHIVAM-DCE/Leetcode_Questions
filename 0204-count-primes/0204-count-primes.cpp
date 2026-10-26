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
            if(n<=2) return 0;

            vector<bool>primes(n,true);
            primes[0]=primes[1]=false;

            for(int i=2;i*i<=n;i++){
                if(primes[i]){
                    int j=i*i;
                    while(j<n){
                        primes[j]=false;
                        j+=i;
                    }
                }
            }
            int ans=0;
            for(int i=0;i<n;i++){
                if(primes[i]){
                    ans++;
                }
            }
            return ans;
        }
    
};