class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        bool res = true;
        
        sort(arr.begin(), arr.end());
        
        int diff = arr[0] - arr[1];
        
        for (int i = 1; i <= arr.size() - 2; ++i) {
            if (arr[i] - arr[i + 1] != diff) {
                res = false;
                break;
            }
        }
        return res;
    }
};
