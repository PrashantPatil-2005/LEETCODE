class Solution {
public:
    int fib(int n) {
        int ans=0;
        if(n==0) return 0;
        if(n==1) return 1;
        else{
            ans=fib(n-2)+fib(n-1);
            return ans;
        }
        return -1;
    }
};