class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;
        string curr = "";
        int num = 0;
        for (int i = 0; i < s.size(); i++) 
        {
            char ch = s[i];

            if (ch >= '0' && ch <= '9') 
                num = num * 10 + (ch - '0');
            

            else if (ch == '[') 
            {
                numStack.push(num);
                strStack.push(curr);

                curr = "";
                num = 0;
            }

            else if (ch == ']') 
            {
                int k = numStack.top();
                numStack.pop();

                string temp = curr;

                curr = strStack.top();
                strStack.pop();

                while (k--) {
                    curr += temp;
                }
            }

            else 
                curr += ch;
            
        }

        return curr;
    }
};
