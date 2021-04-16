class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        int res[n+1];
        for( int i = 0;i <= 2;i++){
            res[i] = i;
        }
        for( int i = 3;i <= n;i++){
            res[i] = res[i-2] + res[i-1];
        }
        return res[n];
    }
};