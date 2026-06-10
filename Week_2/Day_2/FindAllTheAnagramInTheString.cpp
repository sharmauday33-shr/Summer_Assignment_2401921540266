class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
{
        int n = s.size(), m = p.size();
        vector<int> ans;

        if (m > n) 
          return ans;

        vector<int> need(26, 0), window(26, 0);

        for (char c : p)
            need[c - 'a']++;

        for (int i = 0; i < n; i++) 
        {
            window[s[i] - 'a']++;

            if (i >= m) 
                window[s[i - m] - 'a']--;
            
            if (window == need) 
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};
