class Solution {
  public:
    int getCount(string s, int k) {
        // code here
        int res = 0;
        int group_counts[26] = {0};
        
        char last_char = '\0';
        
        for (const char &i: s)
        {
            if (i == last_char)
                continue;
            
            else
            {
                group_counts[((int) i) - 97]++;
                last_char = i;
            }
        }
        
        for (int i = 0; i < 26; i++)
            if (group_counts[i] == k)
                res++;
                
        return res;
    }
};