class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minw = k, currw = 0;
        for(int i = 0; i <= blocks.length()-k; i++){
            for(int j = i; j < k+i; j++){
                if(blocks[j] == 'W')
                    currw++;
            }
            if(currw < minw)
                minw = currw;
            currw = 0;
        }
        return minw;
    }
};