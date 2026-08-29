class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i1 = 0;
        int i2 = n-1;
        for (int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
            if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))) s[i] = ' ';
        }
        cout << s << '\n';
        while ( i1 < n && i2 >= 0) {
            if (s[i1] == ' ') {
                i1++;
                continue;
            }
            if (s[i2] == ' ') {
                i2--;
                continue;
            }

            if (s[i1] == s[i2]) {
                i1++;
                i2--;
            }
            else return false;
        }

        return true;
    }
};
