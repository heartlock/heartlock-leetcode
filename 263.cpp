class Solution {

public:

    bool isUgly(int num) {

        if (num == 1){

            return true;

        }else {

            if (num <= 0){

                return false;

            }else{

                if (num%2 == 0){

                    num = num/2;

                    return isUgly(num);

                }else if (num%3 == 0){

                    num = num/3;

                    return isUgly(num);

                }else if (num%5 == 0){

                    num = num/5;

                    return isUgly(num);

                }else {

                    return false;

                }

            }

        }

    }

};
