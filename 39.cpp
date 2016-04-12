public:

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        int index[10000];

        sort(candidates.begin(), candidates.end());

        backtrace(target, 0, candidates, index, 0);

        return results;

    }

    vector<vector<int>> results;

    void backtrace(int target, int sum, vector<int> &candidates, int index[], int n){

        if (sum > target)

            return;

        if (sum == target){

            vector<int> result;

            for (int i=1; i <= n; i++){

                result.push_back(candidates[index[i]]);

            }

            results.push_back(result);

            return;

        }

        for (int i = index[n]; i < candidates.size(); i++){

            index[n+1] = i;

            backtrace(target, sum + candidates[i], candidates, index, n+1);

        }

    }
