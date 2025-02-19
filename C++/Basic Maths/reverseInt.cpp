class Solution {
public:
    int reverse(int x) {
        int a = 0;  // Reversed number
        
        while (x != 0) {
            int ld = x % 10;  // Extract last digit
            
            // Overflow Check
            if (a > INT_MAX / 10 || (a == INT_MAX / 10 && ld > 7)) {
                return 0;  // Overflow for positive numbers
            }
            if (a < INT_MIN / 10 || (a == INT_MIN / 10 && ld < -8)) {
                return 0;  // Overflow for negative numbers
            }

            a = a * 10 + ld;  // Build reversed number
            x /= 10;          // Remove last digit
        }

        return a;  // Return the reversed number
    }
};