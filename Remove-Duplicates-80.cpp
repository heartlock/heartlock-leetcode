class Solution {

public:

    int removeDuplicates(vector<int>& nums) {

        int length = nums.size();

        if (length == 0){

            return 0;

        }else{

            vector<int> curvector;

            int curl = length;

            int n = 1;

            int cur = nums[0];

            curvector.push_back(cur);

            for (int i = 1; i < length; i++){

                if (cur == nums[i]){

                    if (n < 2){

                        curvector.push_back(cur);

                    }else {

                        curl--;

                    }

                    n++;

                }else {

                    cur = nums[i];

                    curvector.push_back(cur);

                    n = 1;

                }

            }

            nums = curvector;

            //printf("%d", curl);

            return curl;

            

        }

    }

};
