#include <unordered_map>
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> Map;
        int MAX = 0;
        int start = 0;
        for (int end = 0; end < s.size(); end++)
        {
            if (Map.find(s[end]) != Map.end() && Map[s[end]] >= start)
            {
                start = Map[s[end]] + 1;
            }
            Map[s[end]] = end;
            MAX = max(MAX, end - start + 1);
        }
        return MAX;
    }
};