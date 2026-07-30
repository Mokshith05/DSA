class Solution {
public:
    int reverse(int x) {
        long reverseNum = 0;
        while (x){
            reverseNum = (reverseNum*10) + x%10; 
             x /= 10; 
        }

        if (reverseNum>INT_MAX || reverseNum<INT_MIN) return 0;

        return int(reverseNum);
    }
};