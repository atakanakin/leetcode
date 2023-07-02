#include <iostream>
#include <climits>
#include <vector>

using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int left = nums[0];
        int mid = INT_MAX;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > mid)
            {
                return true;
            }
            if (nums[i] < left)
            {
                left = nums[i];
            }
            else if (nums[i] > left && nums[i] < mid)
            {
                mid = nums[i];
            }
        }
        return false;
    }
};