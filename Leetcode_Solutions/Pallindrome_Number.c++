class Solution
{
public:
    bool isPalindrome(int x)
    {
        int temp = x;
        int rev = 0;
        if (x < 0)
        {
            return false;
        }
        while (x > 0)
        {
            int digit = x % 10;
            if (rev > (INT_MAX - digit) / 10)
            {
                return false;
            }
            rev = (rev * 10) + digit;
            x = x / 10;
        }
        return rev == temp;
    }
};