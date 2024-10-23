class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0) return false;

    long int rev{0},n=x,rem{0};
    while(n){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;

    }
    if(rev==x) return true;
    return false;
    }
};