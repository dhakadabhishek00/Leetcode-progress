class Solution {
public:
    string smallestPalindrome(string s) {
         vector<int> freq(26, 0);
         for (char c : s) freq[c - 'a']++;

         string left="";
         string right="";
         string mid="";
         for (int i = 0; i < 26; i++) {
            int c = freq[i];
            char ch = 'a' + i;

            if (c % 2 == 1) {
                mid.push_back(ch); 
                c--;
            }
            left.append(c / 2, ch);
            right.append(c / 2, ch);
        }

        reverse(right.begin(), right.end());
        return left + mid + right;
             
    }
};