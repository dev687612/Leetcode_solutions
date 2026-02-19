class Solution {
public:
    int countBinarySubstrings(string s) {
        
        int result = 0;

        int prevCnt = 0;
        int currCnt = 1;

        for(int i=1;i<s.length();i++)
        {
            if(s[i] == s[i-1])
            {
                currCnt++;
            }
            else
            {
                result+= min(currCnt , prevCnt);
                prevCnt = currCnt;
                currCnt = 1;
            }
        }
        return result+min(prevCnt , currCnt);
    }
};