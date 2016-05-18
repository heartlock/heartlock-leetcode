class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ret;
        if (k == 0) return ret;

        vector<int> tp;
        recur(1, n, tp, ret, k);

        return ret;
    }

    void recur(int s, int e, vector<int> &tp,vector<vector<int>> &ret, int &k) {
        if (tp.size() + e - s + 1 < k) return;
        if (tp.size() == k) {
            ret.push_back(tp);
            return;
        }
        if (s > e) return;
        tp.push_back(s);
        recur(s + 1, e, tp, ret, k);
        tp.pop_back();
        recur(s + 1, e, tp, ret, k);
    }
};
