class Solution
{
public:
    bool isPalindrome(int x)
    {
        // if we can make the number x iterable, then we can solve this problem with 2 pointer approach
        // we can either turn it to a string or list, lets go with list

        int temp = x;
        vector<int> num;
        if (x < 0)
        {
            return false;
        }

        if (x == 0)
        {
            return true;
        }

        while (temp > 0)
        {
            num.push_back(temp % 10);
            temp /= 10;
        }

        int i = 0;
        int j = num.size() - 1;

        while (i < j)
        {
            if (num[i] == num[j])
            {
                i++;
                j--;
                continue;
            }
            return false;
        }
        return true;
    }
};