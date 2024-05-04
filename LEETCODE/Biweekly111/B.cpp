class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0, k = 0;
        int n1 = str1.length(), n2 = str2.length();
        while(j < n2 && i < n1) {
            if (str1[i] == str2[j] || str2[j] - str1[i] == 1 || (str1[i] == 'z' && str2[j] == 'a')) {
                i++;
                j++;
            } else {
                i++;
            }
        }
        if (j == n2) {
            return true;
        }
        k++;
        return false;

    }
};
