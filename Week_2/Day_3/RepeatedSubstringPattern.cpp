class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();

        for (int i = 1; i <= n / 2; i++) {
            if (n % i != 0)
                continue;

            string sub = s.substr(0, i);
            string temp = "";

            int times = n / i;

            for (int j = 0; j < times; j++) {
                temp += sub;
            }

            if (temp == s)
                return true;
        }

        return false;
    }
};
