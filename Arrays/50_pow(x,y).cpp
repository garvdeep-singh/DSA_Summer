class Solution {
public:
    double power(double x,int n){
    //     // power(x,n)
    //     if(n==0){
    //         return 1;
    //     }
    //     else if (n>0){
    //         return x*power(x,n-1);
    //         // return x;
    //     }
    //     else{
    //         return (1.0/x)*power(x,n+1);
    //     }
    //     return x;
    // }
    // double myPow(double x, int n) {
    //     double y;
    //     y=power(x,n);
    //     return y;
        if (n == 0)

            return 1;

        double half = power(x, n / 2);

        if (n % 2 == 0)

            return half * half;

        return x * half * half;

    }

    double myPow(double x, int n) {

        long long N = n;

        if (N < 0) {

            x = 1.0 / x;

            N = -N;

        }

        return power(x, N);
    
    
    }

};