class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <bool> count (256,0);// SC O(1)
        int first =0,second=0,len=0;
        while(second<s.size())// TC O(N)
        {
            while(count[s[second]])
            {
                count[s[first]]=0;// removal of repeating element in previous pointer
                first++;
            }
            count[s[second]]=1;
            len=max(len,(second-first+1));
            second++;   
        }
        return len;
        
    }
};
