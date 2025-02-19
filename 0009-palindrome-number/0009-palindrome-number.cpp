class Solution {
public:
    bool isPalindrome(int x) {
       if (x<0){
        return 0;
       }
       long temp=x;
       long rev;
       while(temp!=0){
        int lastdig=temp%10;
        rev=rev*10+lastdig;
        temp=temp/10;
       }
       return (rev==x);
    }
};