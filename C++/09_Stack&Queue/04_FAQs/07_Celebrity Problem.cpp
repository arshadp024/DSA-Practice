--------------------------------------------------------Brute--------------------------------------
class Solution {
   public:
    int celebrity(vector<vector<int>> &M) {
        vector<int> v;
        for (int j = 0; j < M[0].size(); j++) {
            int temp = 0;
            for (int i = 0; i < M.size(); i++) {
                if (i != j && M[i][j] != 1 || M[j][i] != 0) {
                    temp = 1;
                }
            }
            if (temp == 0) {
                v.push_back(j);
            }
        }
        if (v.size() == 1) {
            return v[0];
        }
        return -1;
    }
};
---------------------------------------------Optimal-------------------------------------------------
