class Solution {
public:
    vector<string> result;
    void solve(int dep, int maxdep, int leftnum, int leftnumtotal, string s){
        if (leftnumtotal*2 > maxdep){
            return;
        }
        if (dep == maxdep){
            result.push_back(s);
            return;
        }
        for(int i = 0; i < 2; i++){
            if(i == 0){
                solve(dep+1, maxdep, leftnum+1, leftnumtotal+1, s+'(');
            }else{
                if(leftnum > 0){
                    solve(dep+1, maxdep, leftnum-1, leftnumtotal, s+')');
                }
                
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        result.clear();
        solve(0, 2*n, 0, 0, "");
        return result;
    }
};
