#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        vector<pair<char, int>> sys;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                sys.push_back(make_pair(s[i], i));
            }
        }

        int i = 0;
        int j = sys.size() - 1;

        while (i < j)
        {
            s[sys[i].second] = sys[j].first;
            s[sys[j].second] = sys[i].first;
            i++;
            j--;
        }
        return s;
    }
};