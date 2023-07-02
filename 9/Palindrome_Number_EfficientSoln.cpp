class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        if (x == 0)
        {
            return true;
        }
        // To avoid overflow use unsigned int
        unsigned int hold = 0;
        int temp = x;
        // Reverse the number
        while (temp > 0)
        {
            hold *= 10;
            hold += temp % 10;
            temp /= 10;
        }
        return x == hold;
    }
};