//Approach (Simple iterate and count)
//T.C : O(m*n) - Total number of characters in all string
//S.C : O(1)
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        
        int prevDeviceCount = 0;
        int result    = 0;
        
        for(int i = 0; i<n; i++) {
            
            int currDeviceCount = 0;
            for(char &ch : bank[i]) {
                if(ch == '1') {
                    currDeviceCount++;
                }
            }
            
            result += (prevDeviceCount * currDeviceCount);
            
            prevDeviceCount = currDeviceCount == 0 ? prevDeviceCount : currDeviceCount;
            
        }
        
        return result;
    }
};
