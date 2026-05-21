class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> prefixSet;

        // Convert arr1 numbers to strings and store all prefixes
        for (int x : arr1) {
            string s = to_string(x);
            string prefix = "";
            for (char c : s) {
                prefix += c;
                prefixSet.insert(prefix);
            }
        }

        int maxLen = 0;

        // Check prefixes of arr2 strings
        for (int x : arr2) {
            string s = to_string(x);
            string prefix = "";
            for (char c : s) {
                prefix += c;
                if (prefixSet.count(prefix)) {
                    maxLen = max(maxLen, (int)prefix.size());
                } else {
                    // Once prefix breaks, no need to continue
                    break;
                }
            }
        }

        return maxLen;
    }
};
