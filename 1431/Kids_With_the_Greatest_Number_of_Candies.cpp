#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> soln(candies.size());
        int max = findMax(candies);
        for (int i = 0; i < candies.size(); i++)
        {
            if ((candies[i] + extraCandies) < max)
            {
                soln[i] = false;
                continue;
            }
            soln[i] = true;
        }
        return soln;
    }

private:
    int findMax(vector<int> &candies)
    {
        int temp = 0;
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] > temp)
            {
                temp = candies[i];
            }
        }
        return temp;
    }
};