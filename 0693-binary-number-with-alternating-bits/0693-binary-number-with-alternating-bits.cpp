class Solution {
public:

    int findHighestSetbit(int n)
    {
        return log2(n);
    }

    bool hasAlternatingBits(int n) {

        bitset<32> b(n);
        
        int highSetBit = findHighestSetbit(n);

        for(int i=0;i<=highSetBit ; i++)
        {
            if(b[i] == b[i+1]) return false;
        }
        return true;
    }
};