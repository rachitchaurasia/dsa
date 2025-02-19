//https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        int t=x;
        int a=0;
        if(x<0){
            return false;
        }
        while(t!=0){
            int ld= t%10;
            t/=10;
            // Overflow Check
            if (a > INT_MAX / 10 || (a == INT_MAX / 10 && ld > 7)) {
                return 0;  // Overflow for positive numbers
            }
            if (a < INT_MIN / 10 || (a == INT_MIN / 10 && ld < -8)) {
                return 0;  // Overflow for negative numbers
            }
            a=a*10+ld;
        }
        if(a==x){
            return true;
        }
        else{
            return false;
        }
    }
};