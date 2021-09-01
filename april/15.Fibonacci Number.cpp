//https://leetcode.com/explore/challenge/card/april-leetcoding-challenge-2021/595/week-3-april-15th-april-21st/3709/

class Solution {
public:
    int fib(int n) {
        int a=0,b=1,c;
        if(n == 0){
            return 0;
        }
        while(n-1 > 0){
            c = a + b;
            a = b;
            b = c;
            n--;
        }
        return c;
    }
};
