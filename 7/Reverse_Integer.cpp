#include <iostream>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long hold = 0;

        while (x != 0)
        {
            hold *= 10;
            hold += x % 10;
            x /= 10;
        }

        if (hold > INT_MAX || hold < INT_MIN)
        {
            return 0;
        }

        return int(hold);
    }
};

int main()
{
    Solution *s1;

    cout << s1->reverse(-123) << endl;

    return 0;
}