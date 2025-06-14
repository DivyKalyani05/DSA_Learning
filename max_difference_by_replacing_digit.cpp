class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);

        // 1. Generate maxVal
        char toReplaceMax = '\0';
        for (char c : s) {
            if (c != '9') {
                toReplaceMax = c;
                break;
            }
        }

        string maxStr = s;
        if (toReplaceMax != '\0') {
            for (char& c : maxStr) {
                if (c == toReplaceMax) c = '9';
            }
        }

        // 2. Generate minVal
        char toReplaceMin = s[0]; // always replace first digit (as long as it's not 0)
        string minStr = s;
        for (char& c : minStr) {
            if (c == toReplaceMin) c = '0';
        }

        int maxVal = stoi(maxStr);
        int minVal = stoi(minStr);

        return maxVal - minVal;
    }
};
