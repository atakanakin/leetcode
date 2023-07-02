#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        // [1,0,0,0,1]
        int num = 0;
        int left = 0;

        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (n == num)
            {
                break;
                return true;
            }
            if (flowerbed[i] == 1)
            {
                left = 1;
                continue;
            }
            if (i + 1 != flowerbed.size())
            {
                if (left == 0 && flowerbed[i + 1] == 0)
                {
                    num += 1;
                    left = 1;
                    continue;
                }
                left = 0;
                continue;
            }
            if (left == 0)
            {
                num += 1;
                break;
            }
        }
        if (n > num)
        {
            return false;
        }
        return true;
    }
};