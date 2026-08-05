class Solution {
public:
    double solve(double y, long n){
        if(n == 0) return 1;
        if(n<0) return solve(1/y, -n);
        if(n % 2 == 0){
            return solve(y*y, n/2);

        }else{
            return y * solve(y * y , (n-1)/2);
        }

    }    
    double myPow(double y, int n) {
      return   solve(y, (long) n);
    }
};