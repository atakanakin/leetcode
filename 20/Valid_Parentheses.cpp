#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> hold;
        int i = 0;
        while (s[i] != '\0')
        {

            if (s[i] == '(')
                hold.push(')');
            else if (s[i] == '{')
                hold.push('}');
            else if (s[i] == '[')
                hold.push(']');
            else
            {
                if (hold.empty())
                    return false;
                if (s[i] != hold.top())
                {
                    return false;
                }
                hold.pop();
            }
            i++;
        }
        return hold.empty();
    }
};

int main()
{
    Solution *s1;

    return 0;
}