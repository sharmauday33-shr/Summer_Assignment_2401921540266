class Solution {
public:
    void rev(string &s, int l, int r)
    {
        if (l >= r)
            return;

        swap(s[l], s[r]);
        rev(s, l + 1, r - 1);
    }
    string reverseWords(string s)
    {
        int start = 0;
        for (int i = 0; i <= s.size(); i++)
        {
            if (i == s.size() || s[i] == ' ')
            {
                rev(s, start, i - 1);
                start = i + 1;
            }
        }
        return s;
    }
};
