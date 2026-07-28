class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        string left = "";
        string mid = "";
        string right = "";

        for (int i = 0; i < 26; i++) {
            int c = freq[i];
            char ch = 'a' + i;

            if (c % 2 == 1) {
                mid += ch;   // only one odd allowed
                c--;
            }
            left.append(c / 2, ch);
            right.insert(0, c / 2, ch); // but better: collect and reverse later
        }

        return left + mid + right;
    }
};
