-----------------------------------------------------Brute----------------------------------------------
class Solution {
public:
    bool rotateString(string s, string goal) {
         int n = s.size();
        for (int i = 0; i < n; i++) {
            char a = s[0];
            s.erase(s.begin());
            s.push_back(a);
            if (s == goal) {
                return 1;
            }
        }
        return 0;
    }
};
------------------------------------------------Optimal------------------------------------
