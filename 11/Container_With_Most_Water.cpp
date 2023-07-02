#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int hold = 0;
        int i = 0;
        int j = height.size() - 1;

        while (i < j)
        {
            if (height[i] > height[j])
            {
                hold = findMax(hold, height[j] * (j - i));
                j--;
                continue;
            }
            hold = findMax(hold, height[i] * (j - i));
            i++;
        }
        return hold;
    }

private:
    int findMax(int a, int b)
    {
        if (a < b)
            return b;
        return a;
    }
};