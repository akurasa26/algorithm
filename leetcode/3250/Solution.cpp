class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int, bool> checker;
        for (int a : arr) {
            checker[a] = true;
        }
        bool zero = false;
        for (int a : arr) {
            if(a == 0 && !zero) {
                zero = true;
                continue;
            }
            if(checker[a * 2]) {
                return true;
            }
        }
        return false;
    }
};